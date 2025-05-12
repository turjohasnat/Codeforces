#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937
#define endl "\n"
#define PI (2.0 * acos(0.0))
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

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

    while(t--){
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll cnt = 0;
        for(auto i = 0; i < n; i++){
            if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p'){
                cnt++;
                i += 2;
            }
            else if(s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e'){
                cnt++;
                i += 2;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
