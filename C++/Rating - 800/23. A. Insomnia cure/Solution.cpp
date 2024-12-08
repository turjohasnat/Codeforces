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

    int k;
    cin >> k;

    int l;
    cin >> l;

    int m;
    cin >> m;

    int n;
    cin >> n;

    int d;
    cin >> d;

    int cnt;
    for( int i = 1; i <= d; i++ ){
        if( i % k == 0 ) cnt++;
        else if( i % l == 0 ) cnt++;
        else if( i % m == 0 ) cnt++;
        else if( i % n == 0 ) cnt++;

    }
    cout << cnt << endl;
    return 0;
}
