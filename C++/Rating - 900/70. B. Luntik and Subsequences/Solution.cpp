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
        for(auto i = 0; i < n; i++)
            cin >> a[i];

        ll cnt_0 = 0, cnt_1 = 0;
        for(auto u : a){
            if(u == 1)
                cnt_1++;
            else if(u == 0)
                cnt_0++;
        }

        ll ways = cnt_1 * pow(2, cnt_0);
        cout << ways << endl;
    }
    return 0;
}
