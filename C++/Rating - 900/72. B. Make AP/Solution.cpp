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

    ll t;
    cin >> t;

    while (t--){
        ll a, b, c;
        cin >> a >> b >> c;

        bool ans = false;

        ll am = (2 * b) - c;
        if(am / a > 0 && am % a == 0)
            ans = true;
        
        ll bm = (a + c) / 2;
        if(bm / b > 0 && bm % b == 0 && (c - a) % 2 == 0)
            ans = true;
        
        ll cm = (2 * b) - a;
        if(cm / c > 0 && cm % c == 0)
            ans = true;

        if(ans)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    
    
    return 0;
}
