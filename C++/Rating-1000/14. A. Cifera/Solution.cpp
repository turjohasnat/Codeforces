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

    ll k, l;
    cin >> k >> l;

    ll cnt = 0, sum = k;
    bool isPower = false;
    while ( 1 ){
        if(sum == l){
            isPower = true;
            break;
        }

        if(sum > l) 
            break;

        sum *= k;
        cnt++;
    }
    

    if(isPower){
        cout << "YES" << endl;
        cout << cnt << endl;
    }
    else 
        cout << "NO" << endl;

    return 0;
}
