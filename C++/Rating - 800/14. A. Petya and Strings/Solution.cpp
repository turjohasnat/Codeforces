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

    solve();
    
    return 0;
}

void solve(){
    string s1, s2;
    cin >> s1 >> s2;

    for( int i = 0; i < s1.size(); i++ ) s1[i] = tolower( s1[i] );
    for( int i = 0; i < s2.size(); i++ ) s2[i] = tolower( s2[i] );

    if( s1 < s2 ) cout << "-1";
    else if( s1 > s2 ) cout << "1";
    else cout << "0";
}
