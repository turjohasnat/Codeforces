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

    int x1, x2, x3, y1, y2, y3, z1, z2, z3;
    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3 >> z1 >> z2 >> z3;

    if( (x1+x2+y1) % 2 == 0 ) cout << "1";
    else cout << "0";
    if( (x1+x2+x3+y2) % 2 == 0 ) cout << "1";
    else cout << "0";
    if( (x2+x3+y3) % 2 == 0 ) cout << "1" << endl;
    else cout << "0" << endl;

    if( (x1+y1+z1+y2) % 2 == 0 ) cout << "1";
    else cout << "0";
    if( (x2+y1+z2+y2+y3) % 2 == 0 ) cout << "1";
    else cout << "0";
    if( (x3+y3+z3+y2) % 2 == 0 ) cout << "1" << endl;
    else cout << "0" << endl;

    if( (z1+y1+z2) % 2 == 0 ) cout << "1";
    else cout << "0";
    if( (z1+z2+z3+y2) % 2 == 0 ) cout << "1";
    else cout << "0";
    if( (z2+z3+y3) % 2 == 0 ) cout << "1" << endl;
    else cout << "0" << endl;

    return 0;
}
