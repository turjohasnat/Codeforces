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

    while( t-- ){
        ll n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        map<int, int> m;
        for(int i = 0; i < n; i++){
            m[v[i]]++;
        }

        int one = 0, morethanOne = 0;
        for(auto u : m){
            if(u.second == 1) one++;
            else if(u.second > 1) morethanOne++;
        }
        ll result = morethanOne + (one + 1) / 2 * 2;
        cout << result << endl;
    }
    return 0;
}
