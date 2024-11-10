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
        ll n;
        cin >> n;

        int c = 0;
        if( n < 10 ) c = n;
        else if( n < 100 ){
            c = n / 10 + 9;
        }
        else if( n < 1000 ){
            c = n / 100 + 9 * 2;
        }
        else if( n < 10000 ){
            c = n / 1000 + 9 * 3;
        }
        else if( n < 100000 ){
            c = n / 10000 + 9 * 4;
        }
        else if( n < 1000000 ){
            c = n / 100000 + 9 * 5;
        }
        cout << c << endl;
    }
    return 0;
}
