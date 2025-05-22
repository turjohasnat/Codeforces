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

        ll cost = 0, k = 0;
        for(auto i = 0; i < n - 1; i++){
            if(a[i] > a[i+1]){
                cost += a[i] - a[i+1];
                k = max(k, (a[i] - a[i+1]));
                a[i+1] = a[i];
            }
        }

        cost += k;
        cout << cost << endl;
    }
    
    return 0;
}
