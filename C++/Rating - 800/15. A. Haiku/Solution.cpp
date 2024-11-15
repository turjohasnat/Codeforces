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
    vector<string> v;
    int cnt[] = { 5, 7, 5 };

    for( int i = 0; i < 3; i++ ){
        string s;
        char c;
        cin >> c;
        getline( cin, s );
        s = c + s;
        v.push_back( s );
    }

    for( int i = 0; i < 3; i++ ){
        int c = 0;
        for( auto u : v[i] ){
            if( isVowel( u ) ) c++;
        }

        if( c != cnt[i] ){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

bool isVowel( char c ){
    return ( c == 'a' || c == 'o' || c == 'e' || c == 'u' || c == 'i' );
}

