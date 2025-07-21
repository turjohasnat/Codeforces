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

    int t;
    cin >> t;

    while( t-- ){
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        if(a >= n) cout << 1 << endl;
        else if(a + b >= n) cout << 2 << endl;
        else if(a + b + c >= n) cout << 3 << endl;
        else{
            ll d = a + b + c;
            ll e = n / d;
            ll cnt = 3 * e;
            ll f = d * e;

            if(f >= n) cout << cnt << endl;
            else if(f + a >= n) cout << cnt + 1 << endl;
            else if(f + a + b >= n) cout << cnt + 2 << endl;
            else cout << cnt + 3 << endl;
        }
    }
    return 0;
}
