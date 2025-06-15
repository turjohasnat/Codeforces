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

    ll n;
    cin >> n;

    vector<ll> r(n);
    for(auto& u : r)
        cin >> u;

    sort(r.rbegin(), r.rend());

    ll ans = 0;
    for(ll i = 0; i < n; i++){
        if(i % 2 == 0)
            ans += r[i] * r[i];
        else
            ans -= r[i] * r[i];
    }
    cout << fixed << setprecision(10) << ans * 3.1415926536 << endl;
    
    return 0;
}
