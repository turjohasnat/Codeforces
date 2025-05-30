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

    ll t;
    cin >> t;

    while (t--){
        ll a, b;
        cin >> a >> b;

        ll ans = LLONG_MAX;
        for(auto i = 0; i < 32; i++){
            ll operation = i;

            ll temp_a = a;
            ll temp_b = b + i;

            if(temp_b <= 1)
                continue;

            while(temp_a > 0){
                temp_a /= temp_b;
                operation++;
            }
            
            ans = min(operation, ans);
        }

        cout << ans << endl; 
    }
    
    
    return 0;
}
 
