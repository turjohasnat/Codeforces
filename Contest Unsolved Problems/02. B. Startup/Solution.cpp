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
bool isVowel( char c );

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}

void solve(){
    
    int n, k;
    cin >> n >> k;

    vector<int> brandCost(k, 0);
    for( int i = 0; i < k; i++ ){
        int b, c;
        cin >> b >> c;
        brandCost[b-1] += c;
    }

    sort( brandCost.rbegin(), brandCost.rend() );

    ll sum = 0;
    for( int i = 0; i < min(n, k); i++ ){
        sum += brandCost[i];
    }
    cout << sum << endl;
}
