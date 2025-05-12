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
        ll n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<ll> m(n);
        for(auto i = 0; i < n; i++)
            cin >> m[i];

        ll result = 0, prev = 0;
        for(auto i = 0; i < n; i++){
            ll differ = m[i] - prev;
            ll cost = min(a * differ, b);
            result += cost;
            prev = m[i];
        }

        if(result < f)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    
    return 0;
}
