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
    string s, ans;
    cin >> s;

    for( auto u : s ){
        char c = tolower( u );
        if( !isVowel( c ) ){
            ans += ".";
            ans += c;
        }
    }
    cout << ans << endl;
}

bool isVowel( char c ){
    return ( c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i' );
}
 
