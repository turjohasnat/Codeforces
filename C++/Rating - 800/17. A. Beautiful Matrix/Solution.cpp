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

    int n = 0;

    int a;
    for( int i = 0; i < 5; i++ ){
        for( int j = 0; j < 5; j++ ){
            cin >> n;
            if( n == 1 ) a = abs ( i - 2 ) + abs ( j - 2 );
        }
    }
    cout << a << endl;

    return 0;
}
