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
       ll n;
       cin >> n;
       
       string s;
       cin >> s;

       ll operations = n - 1;
       for(auto i = 0; i < n; i++){
            if(s[i] == 'B') operations--;
            else break; 
       }

       for (auto i = n - 1; i >= 0; i--){
            if(s[i] == 'A') operations--;
            else break;
       }
       
       if(operations > 0)
            cout << operations << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
