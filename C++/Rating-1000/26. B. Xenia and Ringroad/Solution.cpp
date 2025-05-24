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

    ll n, m;
    cin >> n >> m;

    vector<ll> a(m);
    for(auto& u : a)
        cin >> u;
        
    ll time = 0, current = 1;
    for(auto i = 0; i < m; i++){
        if(a[i] >= current)
            time += a[i] - current;
        else
            time += n - current + a[i];
        
        current = a[i];
    }

    cout << time << endl;
    return 0;
}
