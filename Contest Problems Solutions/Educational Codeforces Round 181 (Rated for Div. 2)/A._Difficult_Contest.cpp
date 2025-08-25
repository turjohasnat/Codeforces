//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dou;

#define endl "\n"
#define PI (2.0 * acos(0.0))

inline int ceil(int a, int b){
return (a + b - 1) / b;
}
inline int abs (int a, int b){
int d1 = a - b;
if (d1 < 0) d1 *= -1;
return d1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;

        bool isOk = false;
        if(s.size() >= 3){
            for(ll i = 0; i <= s.size() - 3; i++){
                if((s[i] == 'F' && s[i+1] == 'F' && s[i+2] == 'T') || 
                    (s[i] == 'N' && s[i+1] == 'T' && s[i+2] == 'T')){
                    isOk = true;
                    break;
                }
            }
        }

        string temp_s = "";
        if(isOk){
            ll cntT = count(s.begin(), s.end(), 'T');
            ll cntF = count(s.begin(), s.end(), 'F');
            ll cntN = count(s.begin(), s.end(), 'N');

            string other = "";
            for(auto i : s){
                if(i != 'N' && i != 'F' && i != 'T')
                    other += i;
            }

            temp_s = string(cntT, 'T') + string(cntN, 'N') + string(cntF, 'F') + other;
        }
        else
            temp_s = s;

        cout << temp_s << endl;
    }
    
    return 0;
}
