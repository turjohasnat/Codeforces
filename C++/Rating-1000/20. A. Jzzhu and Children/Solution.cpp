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

    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    for(auto& u : a)
        cin >> u;
    
    ll index = 0;
    bool isSmall = true;
    while (1){
        for(auto i = 0; i < n; i++){
            if(a[i] > m){
                index = i;
                a[i] -= m;
                isSmall = false;
            }
        }

        bool isOk = true;
        for(auto i = 0; i < n; i++){
            if(a[i] > m){
                isOk = false;
                break;
            }
        }

        if(isOk)
            break;
    }
    
    if(isSmall)
        cout << n << endl;
    else
        cout << index + 1 << endl;

    return 0;
}
