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

    vector<ll> friends(n);
    for(auto& u : friends)
        cin >> u;

    ll sum = 0;
    for(auto u : friends)
        sum += u;

    ll valid = 0;
    for(auto i = 1; i < 6; i++){
        ll total = sum + i;
        if(total % (n + 1) != 1)
            valid++;
    }
    cout << valid << endl;

    return 0;
}
