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

ll luckyNum(ll num){
    ll smallest = 9;
    ll largest = 0;

    while (num != 0){
        ll digit = num % 10;
        smallest = min(smallest, digit);
        largest = max(largest, digit);
        num /= 10;
    }
    return largest - smallest;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--){
        ll l, r;
        cin >> l >> r;

        ll luckiestNum = l;
        ll max_luckyNum = luckyNum(l);
        for(ll i = l + 1; i <= min(r, l + 100); i++){
            ll current_lucky_num = luckyNum(i);
            if(current_lucky_num >= max_luckyNum){
                max_luckyNum = current_lucky_num;
                luckiestNum = i;
            }
            if(max_luckyNum == 9) 
                break;
        }
        cout << luckiestNum << endl;
    }
    return 0;
}
