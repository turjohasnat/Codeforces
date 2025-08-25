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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--){
        ll a, b, k;
        cin >> a >> b >> k;

        ll value = __gcd(a, b);
        ll dx = a / value;
        ll dy = b / value;

        if(dx <= k && dy <= k)
            cout << 1 << endl;
        else 
            cout << 2 << endl;
            
    }
    
    return 0;
}
