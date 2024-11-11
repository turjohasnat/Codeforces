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
        int n, x;
        cin >> n >> x;

        int p = 0, b = 0;
        for (int i = 0; i < n; ++i) {
          int a; cin >> a;
          b = max(b, a - p);
          p = a;
        }
        b = max(b, 2 * (x - p));
        cout << b << endl;
    }
    return 0;
}