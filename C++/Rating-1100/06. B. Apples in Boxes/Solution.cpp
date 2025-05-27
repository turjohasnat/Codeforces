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

    ll t;
    cin >> t;

    while (t--){
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for(auto& u : a)
            cin >> u;
        
        ll min_a = *min_element(a.begin(), a.end());
        ll sum = accumulate(a.begin(), a.end(), 0LL);
        
        sort(a.begin(), a.end());
        a[n-1]--;
        sort(a.begin(), a.end());

        ll max_a = a[n-1];
        
        if(max_a - min_a > k)
            cout << "Jerry" << endl;
        else if(sum % 2 == 0)
            cout << "Jerry" << endl;
        else 
            cout << "Tom" << endl;
            
    }

    return 0;
}

 
