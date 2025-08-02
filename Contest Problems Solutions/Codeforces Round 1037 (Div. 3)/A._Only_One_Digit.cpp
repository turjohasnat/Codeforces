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

    while(t--){
        string x;
        cin >> x;

        if(x.size() < 2){
            cout << x << endl;
            continue;
        }
        
        char min_num = x.front();
        for(ll i = 1; i < x.size(); i++){
            if(min_num >= x[i])
                min_num = x[i];
        }
        cout << min_num << endl;
    }
    return 0;
}
