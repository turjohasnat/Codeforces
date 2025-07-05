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

        map<char, ll> mp;
        for(auto u : s)
            mp[u]++;

        bool flag = false;
        for(ll i = 1; i < n - 1; i++){
            mp[s[i]]--;

            if(mp[s[i]]){
                flag = true;
                break;
            }

            mp[s[i]]++;
        }

        if(flag)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;

    }
    
    return 0;
}
