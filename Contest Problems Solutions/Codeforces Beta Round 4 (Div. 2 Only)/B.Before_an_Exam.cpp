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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll d, sumTime;
    cin >> d >> sumTime;
    
    ll minTotal = 0, maxTotal = 0;
    vector<ll> minTime(d), maxTime(d);
    
    for(ll i = 0; i < d; i++){
        cin >> minTime[i] >> maxTime[i];

        minTotal += minTime[i];
        maxTotal += maxTime[i];
    }

    if(minTotal > sumTime || maxTotal < sumTime){
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    vector<ll> result = minTime;
    ll needed = sumTime - minTotal;

    for(ll i = 0; i < d; i++){
        ll extra = maxTime[i] - minTime[i];

        if(needed > 0){
            ll add = min(extra, needed);
            
            result[i] += add;
            needed -= add;
        }
    }

    for(auto i : result)
        cout << i << " ";

    return 0;
}
