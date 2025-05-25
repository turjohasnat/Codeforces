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

    ll k;
    cin >> k;

    vector<ll> a;
    for(auto i = 0; i < 12; i++){
        ll x;
        cin >> x;
      
        a.push_back(x);
    }

    sort(a.rbegin(), a.rend());

    ll months = 0, sum = 0;
    for(auto u : a){
        if(k <= sum)
            break;

        sum += u;
        months++;
    }

    if(k == 0)
        cout << 0 << endl;
    else if(sum < k)
        cout << -1 << endl;
    else
        cout << months << endl;

    return 0;
}
