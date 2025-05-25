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

    ll k;
    cin >> k;

    string s;
    cin >> s;

    map<char, ll> m;
    for(auto u : s)
        m[u]++;

    bool possible = true;
    for(auto p : m){
        if(p.second % k != 0){
            possible = false;
            break;
        }
    }

    if(possible){
        string temp_s;
        for(auto p : m){
            ll repeat = p.second / k;
            for(auto i = 0; i < repeat; i++)
                temp_s += p.first;
        }

        for(auto i = 0; i < k; i++){
            cout << temp_s;
        }
        cout << endl;
    }
    else
        cout << -1 << endl;

    return 0;
}
