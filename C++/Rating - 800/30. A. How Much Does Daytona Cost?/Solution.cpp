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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        bool found = false;
        for(int i = 0; i < n; i++){
            if(v[i] == k){
                found = true;
                break;
            }
        }

        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
