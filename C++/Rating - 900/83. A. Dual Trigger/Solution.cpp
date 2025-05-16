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
        ll n;
        cin >> n;

        string s;
        cin >> s;

        vector<ll> v;
        for(auto i = 0; i < n; i++){
            if(s[i] == '1') v.push_back(i);
        }

        if(v.size() % 2 != 0)
            cout << "NO" << endl;
        else if(v.size() == 2 && v[1] - v[0] == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }

    return 0;
}
