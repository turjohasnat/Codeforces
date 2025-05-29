//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dou;

#define endl "\n"
#define PI (2.0 * acos(0.0))

const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

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

    vector<ll> a(n);
    for(auto& u : a)
        cin >> u;

    map<ll, ll> m;
    for(auto u : a)
        m[u]++;

    ll frames = 0;
    for(auto u : m){
        if(u.second >= 2)
            frames += u.second / 2;
    }

    frames /= 2;
    cout << frames << endl;
    
    return 0;
}

 
