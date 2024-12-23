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

    while( t-- ){
        ll n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> b(n);
        for(int i = 0; i < n; i++) cin >> b[i];

        int result = 0;
        for(int i = 0; i < n-1; i++){
            if(a[i] > b[i+1]){
                int c = a[i] - b[i+1];
                result += c;
            }
        }

        result += a[n-1];
        cout << result << endl;
    }
    return 0;
}
