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

    ll minOperation = LLONG_MAX;

    vector<ll> v(n);
    for( ll i = 0; i < n; i++ ){
        cin >> v[i];
    }

    for( ll i = 0; i < n; i++ ){
        if( v[i] == 0 ){
            minOperation = 0;
            break;
        }
        minOperation = min(minOperation, abs(v[i]));
    }
    cout << minOperation << endl;

    return 0;
}
