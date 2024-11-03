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

    int t;
    cin >> t;

    while( t-- ){
        int n, a, b;
        cin >> n >> a >> b;

        int x = n / 2;
        if(n % 2 == 0) {
            if((n * a) <= (x * b)) cout << n * a << endl;
            else cout << x * b << endl;
        } else {
            if((n * a) <= (x * b + a)) cout << n * a << endl;
            else cout << x * b + a << endl;
        }
    }
    return 0;
}
