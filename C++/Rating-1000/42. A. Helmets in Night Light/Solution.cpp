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
        ll n, p;
        cin >> n >> p;

        vector<ll> a(n);
        for(auto& u : a)
            cin >> u;

        vector<ll> b(n);
        for(auto& u : b)
            cin >> u;

        vector<pair<ll, ll>> v(n);
        for(ll i = 0; i < n; i++)
            v[i] = {b[i], a[i]};

        sort(v.begin(), v.end());

        ll cost = p, resident = 1;
        for(ll i = 0; i < n; i++){
            ll sharing_cost = v[i].first;
            if(sharing_cost >= p)
                break;

            if(n <= resident)
                break;
            else{
                ll c = n - resident;
                if(c >= v[i].second){
                    cost += v[i].second * v[i].first;
                    resident += v[i].second;
                }
                else{
                    cost += c * v[i].first;
                    resident += c;
                }
            }
        }

        cost += (n - resident) * p;
        cout << cost << endl;
    }
    return 0;
}
