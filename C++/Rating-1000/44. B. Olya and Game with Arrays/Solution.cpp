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

        vector<ll> a1;
        ll num_a0 = LLONG_MAX;

        for(ll i = 0; i < n; i++){
            ll m;
            cin >> m;

            vector<ll> a(m);
            for(auto& u : a)
                cin >> u;

            sort(a.begin(), a.end());
            a1.push_back(a[1]);

            num_a0 = min(num_a0, a[0]);
        }

        sort(a1.begin(), a1.end());
        ll sum = accumulate(a1.begin(), a1.end(), 0LL);
        ll num_a1 = a1[0];

        ll beauty = sum + num_a0 - num_a1;
        cout << beauty << endl;
    }
    
    return 0;
}
