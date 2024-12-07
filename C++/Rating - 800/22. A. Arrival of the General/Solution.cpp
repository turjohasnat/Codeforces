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

    int minValue = 1000, minIndex = 0;
    int maxValue = 0, maxIndex = 0;

    int n;
    cin >> n;

    for( int i = 0; i < n; i++){
        int x;
        cin >> x;

        if( x > maxValue ){
            maxValue = x;
            maxIndex = i;
        }

        if( x <= minValue ){
            minValue = x;
            minIndex = i;
        }

    }

    int moves;
    if ( maxIndex > minIndex ) moves = ( maxIndex - 1 ) + ( n - minIndex ) - 1;
    else moves = ( maxIndex - 1 ) + ( n - minIndex );

    cout << moves << endl;
    return 0;
}
