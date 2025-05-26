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

    vector<ll> price(n);
    for(auto& u : price)
        cin >> u;
    
    vector<string> fruits_name(m);
    for(auto& u : fruits_name)
        cin >> u;
        
    map<string, ll> fruit_counts;
    for(auto u : fruits_name)
        fruit_counts[u]++;

    vector<ll> fruits_count;
    for(auto u : fruit_counts){
        ll x = u.second;
        fruits_count.push_back(x);
    }

    sort(price.begin(), price.end());
    sort(fruits_count.rbegin(), fruits_count.rend());
    
    ll min_cost = 0;
    for(auto i = 0; i < fruits_count.size(); i++){
        min_cost += fruits_count[i] * price[i];
    }

    ll max_cost = 0;
    sort(price.rbegin(), price.rend());
    for(auto i = 0; i < fruits_count.size(); i++){
        max_cost += fruits_count[i] * price[i];
    }

    cout << min_cost << " " << max_cost << endl;
    
    return 0;
}

 
