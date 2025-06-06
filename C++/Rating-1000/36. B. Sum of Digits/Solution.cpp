//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dou;

#define endl "\n"
#define PI (2.0 * acos(0.0))

const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

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

    string s;
    cin >> s;

    if(s.size() <= 1)
        cout << 0 << endl;
    else{
        ll cnt = 0;

        while ( 1 ){
            ll sum = 0;
            for(ll i = 0; i < s.size(); i++){
                sum += s[i] - '0';
            }
            
            string temp_s = to_string(sum);
            s = temp_s;
            cnt++;

            if(sum < 10)
                break;
        }

        cout << cnt << endl;
    }
    return 0;
}
