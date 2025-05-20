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

    vector<ll> a(n);
    for(auto& u : a)
        cin >> u;

    ll min_difference = abs(a[0] - a[n-1]);
    ll first_position = 1, last_position = n;

    for(auto i = 0; i < n; i++){
        ll temp = abs(a[i] - a[i+1]);
        if(min_difference > temp){
            min_difference = temp;
            first_position = i + 1;
            last_position = i + 2;
        }
    }

    cout << first_position << " " << last_position << endl;
    return 0;
}
