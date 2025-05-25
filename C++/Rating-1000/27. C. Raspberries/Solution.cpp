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

        ll cnt_even = 0, ans = LLONG_MAX;
        for(auto i = 0; i < n; i++){
            if(a[i] % 2 == 0)
                cnt_even++;

            if(a[i] % k == 0)
                ans = 0;
            else
                ans = min(ans, k - a[i] % k);  
        }

        if(k == 4){
            if(cnt_even >= 2)
                ans = min(ans, 0LL);
            else if(cnt_even == 1)
                ans = min(ans, 1LL);
            else if(cnt_even == 0)
                ans = min(ans, 2LL);
        }

        cout << ans << endl;
    }
    
    return 0;
}
