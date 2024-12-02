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

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int t;
    //cin >> t;

    //while (t--) {
        solve();
    //}

    return 0;
}

void solve(){
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);

    for( int i = 0; i < n; i++ ){
        cin >> v[i].first >> v[i].second;
        v[i].first *= -1;
    }

    sort(v.begin(), v.end());

    int result = 0;
    for( auto u : v ){
        if( u == v[k-1]) result++;
    }

    cout << result << endl;
}
