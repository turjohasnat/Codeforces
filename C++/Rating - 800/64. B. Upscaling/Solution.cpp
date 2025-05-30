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
    
    ll t;
    cin >> t;

    while (t--){
        ll n;
        cin >> n;
    
        for(ll i = 0; i < 2 * n; i++){
            for(ll j = 0; j < 2 * n; j++){
                ll row = i / 2;
                ll col = j / 2;
    
                if((row + col) % 2 == 0)
                    cout << "#";
                else
                    cout << ".";
            }
            cout << endl;
        }
    } 

    return 0;
}
