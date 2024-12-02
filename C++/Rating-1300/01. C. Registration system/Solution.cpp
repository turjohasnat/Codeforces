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

    int n;
    cin >> n;

    map<string, int> cnt;

    while( n-- ){
        string s;
        cin >> s;

        if( cnt[s] == 0 ) cout << "OK" << endl;
        else cout << s << cnt[s] << endl;

        cnt[s]++;
    }

    return 0;
}
 
