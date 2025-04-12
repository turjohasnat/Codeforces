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

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        ll a, b;
        cin >> a >> b;

        ll x_king, y_king;
        cin >> x_king >> y_king;

        ll x_queen, y_queen;
        cin >> x_queen >> y_queen;

        set<pair<int, int>> king_hits, queen_hits;

        for(int i = 0; i < 4; i++){
            king_hits.insert({x_king + dx[i] * a, y_king + dy[i] * b});
            king_hits.insert({x_king + dx[i] * b, y_king + dy[i] * a});

            queen_hits.insert({x_queen + dx[i] * a, y_queen + dy[i] * b});
            queen_hits.insert({x_queen + dx[i] * b, y_queen + dy[i] * a});
        }

        int attack = 0;
        for(auto positions : king_hits){
            if(queen_hits.find(positions) != queen_hits.end())
                attack++;
        }
        cout << attack << endl;
    }
    
    return 0;
}
