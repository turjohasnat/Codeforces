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
        ll a, b, c;
        cin >> a >> b >> c;

        ll min_num = min(a, min(b, c));

        bool isThreadlet = true;
        if(a % min_num != 0 || b % min_num != 0 || c % min_num != 0)
            isThreadlet = false;

        ll cnt = 0;
        while (a != min_num){
            if(cnt > 3 || a % min_num != 0){
                isThreadlet = false;
                break;
            }
            a -= min_num;
            cnt++;
        }
        
        while (b != min_num){
            if(cnt > 3 || b % min_num != 0){
                isThreadlet = false;
                break;
            }
            b -= min_num;
            cnt++;
        }
        
        while (c != min_num){
            if(cnt > 3 || c % min_num != 0){
                isThreadlet = false;
                break;
            }
            c -= min_num;
            cnt++;
        }
        
        if(cnt <= 3 && isThreadlet)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
