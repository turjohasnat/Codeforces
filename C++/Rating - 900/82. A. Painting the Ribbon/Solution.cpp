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
        ll n, m, k;
        cin >> n >> m >> k;

        ll skip = n / m;
        if(n % m != 0) skip++;

        ll print = n - skip;
        if(print > k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
