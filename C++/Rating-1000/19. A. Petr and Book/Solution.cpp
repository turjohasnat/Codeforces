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

    vector<ll> week(7);
    for(auto i = 0; i < 7; i++)
        cin >> week[i];

    ll cnt = 0, sum = week[0];
    while (sum < n){
        cnt++;
        cnt %= 7;
        sum += week[cnt];
    }
    
    cout << cnt + 1 << endl;
    return 0;
}
