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

        vector<ll> a(n);
        for(auto& u : a)
            cin >> u;

        vector<ll> prefix_max(n);
        prefix_max[0] = a[0];
        for(auto i = 1; i < n; i++)
            prefix_max[i] = max(prefix_max[i-1], a[i]);

        vector<ll> suffix_sum(n+1, 0);
        for(auto i = n - 1; i >= 0; i--)
            suffix_sum[n-i] = suffix_sum[n-1-i] + a[i];

        for(auto i = 0; i < n; i++){
            ll x = prefix_max[n-1-i];
            ll y = suffix_sum[i];

            ll k = x + y;
            cout << k << " ";
        }
        cout << endl;
    }
    
    return 0;
}
