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

    while(t--){
        ll n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        ll sum1 = 0, sum2 = 0;
        for(auto i = 0; i < n; i++){
            if(i % 2 == 0){
                if(a[i] == '1')
                    sum2--;
                if(b[i] == '0')
                    sum1++;
            }
            else{
                if(a[i] == '1')
                    sum1--;
                if(b[i] == '0')
                    sum2++;
            }
        }

        if(sum1 >= 0 && sum2 >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
