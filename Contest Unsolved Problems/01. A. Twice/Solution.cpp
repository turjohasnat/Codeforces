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

    solve();

    return 0;
}

void solve(){
    int t;
    cin >> t;

    while( t-- ){
        int n;
        cin >> n;

        vector<int> v(n);
        for( int i = 0; i < n; i++ ) cin >> v[i];

        sort( v.begin(), v.end() );

        int c = 0;
        for( int i = 0; i < n; i++ ){
            if(v[i] == v[i+1]){
                c++;
                i++;
            }
        }
        cout << c << endl;
    }
}
