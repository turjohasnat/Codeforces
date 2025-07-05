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
        ll n, s;
        cin >> n >> s;

        vector<ll> x(n);
        for(auto& u : x)
            cin >> u;

        ll first = abs(s - x.front());
        ll last = abs(s - x.back());

        ll steps = 0;
        if(first >= last)
            steps = last + (x.back() - x.front());
        else 
            steps = first + (x.back() - x.front());

        cout << steps << endl;

    }
    
    return 0;
}
