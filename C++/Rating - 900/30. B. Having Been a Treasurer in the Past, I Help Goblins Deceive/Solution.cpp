//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
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
    
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        
        string s;
        cin >> s;

        if(s.size() < 3)
            cout << 0 << endl;
        else{
            ll dashCount = 0;
            ll underscoreCount = 0;
            for(ll i = 0; i < n; i++){
                if(s[i] == '_') underscoreCount++;
                else dashCount++;
            }

            if(dashCount < 2 || underscoreCount < 1)
                cout << 0 << endl;
            else{
                if(dashCount % 2 == 0){
                    dashCount /= 2;
                    ll result = dashCount * dashCount * underscoreCount;
                    cout << result << endl;
                }
                else{
                    dashCount /= 2;
                    ll c = dashCount + 1;
                    ll result = dashCount * c * underscoreCount;
                    cout << result << endl;
                }
            }
        }
    }
    return 0;
}
