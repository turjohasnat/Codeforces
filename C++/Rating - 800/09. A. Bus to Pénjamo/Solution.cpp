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
        int n, r;
        cin >> n >> r;

        int happy = 0, unhappy = 0;
        vector<int> v(n);
        for( int i = 0; i < n; i++ ){
            cin >> v[i];
            happy += (v[i]/2)*2;
            r -= v[i] / 2;
            unhappy += v[i] % 2;
        }

        if( unhappy > r ) happy += 2*r - unhappy;
        else happy += unhappy;
        cout << happy << endl;
    }
    return 0;
}
