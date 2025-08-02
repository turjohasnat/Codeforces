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

        ll a[n+1];
        for(ll i = 1; i <= n; i++)
            cin >> a[i];

        ll cnt = 0, hike = 0;
        for(ll i = 1; i <= n; i++){
            if(a[i] == 1){
                hike += (cnt + 1)/(k+1);
                cnt = 0;
                continue;
            }
            else
                cnt++;
        }

        hike += (cnt + 1)/(k + 1);
        cout << hike << endl;
    }
    return 0;
}
