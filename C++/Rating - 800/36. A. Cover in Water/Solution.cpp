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

        string s;
        cin >> s;

        int cnt = 0;
        bool isOk = true;
        for( int i = 0; i < n; i++ ){
            if(s[i] == '.') cnt++;

            if( i > 0 && i < n - 1){
                if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
                    cout << 2 << endl;
                    isOk = false;
                    break;
                }
            }
        }
        if(isOk) cout << cnt << endl;
    }

    return 0;
}
