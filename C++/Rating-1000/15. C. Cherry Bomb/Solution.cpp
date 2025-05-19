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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for(auto& u : a)
            cin >> u;

        vector<ll> b(n);
        for(auto& u : b)
            cin >> u;

        if(count(b.begin(), b.end(), -1) == n){
            ll max_value = a[0];
            ll min_value = a[0];

            for(auto i = 1; i < n; i++){
                max_value = max(max_value, a[i]);
                min_value = min(min_value, a[i]);
            }

            ll ways = (k + min_value + 1) - max_value;
            cout << ways << endl;
            continue;
        }

        ll sum = -1;
        for(auto i = 0; i < n; i++){
            if(b[i] != -1){
                sum = a[i] + b[i];
                break;
            }
        }

        bool found = false;
        for(auto i = 0; i < n; i++){
            if(b[i] != -1){
                if(a[i] + b[i] != sum){
                    found = true;
                    break;
                }
            }
            else{
                ll need = sum - a[i];
                if(need < 0 || need > k){
                    found = true;
                    break;
                }
            }
        }
        if(found)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    
    return 0;
}
