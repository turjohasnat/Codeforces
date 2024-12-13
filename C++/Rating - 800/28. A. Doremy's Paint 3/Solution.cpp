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
        int n;
        cin >> n;

        map<int, int> m;
        int x = 0;
        for( int i = 0; i < n; i++ ){
            cin >> x;
            m[x]++;
        }

        vector<int> v;
        if(m.size() >= 3) cout << "NO" << endl;
        else if(m.size() == 1) cout << "YES" << endl;
        else{
            for( auto u : m ) v.push_back(u.second);

            if(abs (v[0] - v[1]) >= 2) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }

    return 0;
}
