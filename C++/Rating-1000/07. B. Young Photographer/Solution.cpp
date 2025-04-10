//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, x;
    cin >> n >> x;

    ll left = 0, right = 100000; 
    while (n--){
        ll a, b;
        cin >> a >> b;

        if(a > b) swap(a, b);
        left = max(left, a);
        right = min(right, b);
    }

    if(left <= right){
        if(x < left)
            cout << left - x << endl;
        else if(x > right)
            cout << x - right << endl;
        else 
            cout << 0 << endl;
    }
    else 
        cout << -1 << endl;

    return 0;
}
