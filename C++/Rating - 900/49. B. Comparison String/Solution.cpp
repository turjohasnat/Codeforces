//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

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
#define sqr(a) ((a) * (a))

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

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        cin.ignore();

        string s;
        getline(cin, s);

        ll max_num = 0, cnt = 0;
        for(auto i = 0; i < s.size(); i++){
            if(s[i] == s[i+1])
                cnt++;
            else{
                cnt++;
                max_num = max(max_num, cnt);
                cnt = 0;
            }
        }
        cout << max_num + 1 << endl;
    }

    return 0;
}
