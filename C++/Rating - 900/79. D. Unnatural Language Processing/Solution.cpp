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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--){
        ll n;
        cin >> n;

        string s;
        cin >> s;

        for(auto i = 0; i < n; i++){
            if(s[i] == 'b' || s[i] == 'c' || s[i] == 'd')
                cout << s[i];
            else{
                cout << s[i];
                if(s[i+1] == 'b' || s[i+1] == 'c' || s[i+1] == 'd'){
                    if(s[i+2] != 'a' && s[i+2] != 'e'){
                        cout << s[i+1];
                        i++;
                    }
                }
                if(i != n-1) cout << '.';
            }
        }
        cout << endl;
    }
    
    return 0;
}
