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

ll isFair(ll n){
    ll num = n;

    while (num != 0){
        ll x = num % 10;
        
        if(x != 0 && n % x != 0)
            return false;
        
        num /= 10;
    }

    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--){
        ll n;
        cin >> n;

        while(!isFair(n))
            n++;
        
        cout << n << endl;
    }

    return 0;
}
