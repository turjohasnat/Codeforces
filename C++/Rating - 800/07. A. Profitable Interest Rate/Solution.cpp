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
        ll a, b;
        cin >> a >> b;

        if( a >= b ) cout << a << endl;
        else{
            ll x = b - a;
            ll d = b - 2 * x;
            
            if( d <= a && d > 0 ){
                cout << d << endl;
            }
            else cout << "0" << endl;
        }
    }
    return 0;
}
