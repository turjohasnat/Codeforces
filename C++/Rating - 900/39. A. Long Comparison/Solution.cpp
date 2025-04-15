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

    while (t--){
        string x1, x2;
        ll p1, p2;

        cin >> x1 >> p1;
        cin >> x2 >> p2;

        ll x1_size = x1.size() + p1;
        ll x2_size = x2.size() + p2;

        if(x1_size > x2_size)
            cout << ">" << endl;
        else if(x1_size < x2_size)
            cout << "<" << endl;
        else{
            while (x1.size() > x2.size())
                x2 += '0';
            
            while (x1.size() < x2.size())
                x1 += '0';

            if(x1 > x2)
                cout << ">" << endl;
            else if(x1 < x2)
                cout << "<" << endl;
            else 
                cout << "=" << endl;
        }
    }
    
    return 0;
}
