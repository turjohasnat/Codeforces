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

ll isPrime(ll n){
    for(ll i = n; ; i++){
        bool prime = true;
        for(ll j = 2; j * j <= i; j++){
            if(i % j == 0){
                prime = false;
                break;
            }
        }

        if(prime)
            return i;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--){
        ll d;
        cin >> d;

        ll first_divisor = 1;
        ll second_divisor = isPrime(first_divisor + d);
        ll third_divisor = isPrime(second_divisor + d);
        
        ll fourth_divisor = second_divisor * third_divisor;
        cout << fourth_divisor << endl;
    }
    
    return 0;
}
