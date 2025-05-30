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

    vector<ll> speed(n), ram(n), hdd(n), cost(n);
    for(auto i = 0; i < n; i++)
        cin >> speed[i] >> ram[i] >> hdd[i] >> cost[i];

    vector<bool> outdated(n, false);
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(i == j)
                continue;
            
            if(speed[i] < speed[j] && ram[i] < ram[j] && hdd[i] < hdd[j]){
                outdated[i] = true;
                break;
            }
        }
    }

    ll min_cost = 1001, result = 0;
    for(ll i = 0; i < n; i++){
        if(!outdated[i] && cost[i] < min_cost){
            min_cost = cost[i];
            result = i + 1;
        }
    }

    cout << result << endl;
    
    return 0;
}
