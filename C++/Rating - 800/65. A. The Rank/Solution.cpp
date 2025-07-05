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

    ll n;
    cin >> n;

    ll eng, german, math, history;
    cin >> eng >> german >> math >> history;

    ll thomas_sum = eng + german + math + history;
    
    ll rank = 1;
    for(ll i = 1; i < n; i++){
        ll eng, german, math, history;
        cin >> eng >> german >> math >> history;

        ll total_sum = eng + german + math + history;
        if(total_sum > thomas_sum)
            rank++;
    }

    cout << rank << endl;
    return 0;
}
