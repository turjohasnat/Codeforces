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
    
    ll n, m;
    cin >> n >> m;

    vector<string> grades(n);
    vector<bool> successful(n, false);

    for(ll i = 0; i < n; i++){
        cin >> grades[i];
    }

    for(ll j = 0; j < m; j++){
        char max_grade = '0';

        for(ll i = 0; i < n; i++){
            if(grades[i][j] > max_grade)
                max_grade = grades[i][j];
        }

        for(ll i = 0; i < n; i++){
            if(grades[i][j] == max_grade)
                successful[i] = true;
        }
    }

    ll cnt = 0;
    for(ll i = 0; i < n; i++){
        if(successful[i] == true)
            cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}
