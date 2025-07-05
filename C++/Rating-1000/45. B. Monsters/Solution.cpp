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

    while(t--){
        ll n, k;
        cin >> n >> k;

        vector<pair<ll, ll>> health(n);
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;

            health[i] = {x, i + 1};
        }

        for(ll i = 0; i < n; i++){
            health[i].first = health[i].first % k;

            if(health[i].first == 0)
                health[i].first = k;
        }

        sort(health.begin(), health.end(), [&](pair<ll, ll> a, pair<ll, ll> b){
            if(a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        });

        for(auto u : health)
            cout << u.second << " ";

        cout << endl;
    }
    return 0;
}
