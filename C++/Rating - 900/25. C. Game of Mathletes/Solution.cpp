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
        ll n, k;
        cin >> n >> k;

        vector<ll> x(n);
        unordered_map<ll, ll> cnt;
        for(ll i = 0; i < n; i++){
            cin >> x[i];
            cnt[x[i]]++;
        }

        ll score = 0;
        for(ll i = 0; i < n; i++){
            ll a = x[i];
            ll b = k - a;

            if(cnt[a] > 0 && cnt[b] > 0){
                if(a == b)
                    score += cnt[a] / 2;
                else
                    score += min(cnt[a], cnt[b]);
                
                cnt[a] = 0;
                cnt[b] = 0;
            }
        }
        cout << score << endl;
    }
    return 0;
}
