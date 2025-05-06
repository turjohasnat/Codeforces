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

    ll n;
    cin >> n;

    while(n--){
        string s, t;
        cin >> s >> t;
        
        vector<ll> freq_t(26, 0);
        for(ll i = 0; i < t.size(); i++)
            freq_t[t[i] - 'A']++;
        
        for(ll i = s.size() - 1; i >= 0; i--){
            if(freq_t[s[i] - 'A'] > 0)
                freq_t[s[i] - 'A']--;
            else
                s[i] = '.';
        }
        
        string main_s;
        for(ll i = 0; i < s.size(); i++){
            if(s[i] != '.')
                main_s += s[i];
        }
        
        if(main_s == t)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
