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

    int t;
    cin >> t;

    while( t-- ){
        ll a, b, c;
        cin >> a >> b >> c;

        if((a + c) > (b + c)){
            cout << "First" << endl;
        }
        else if((a + c) < (b + c)){
            cout << "Second" << endl;
        }
        else{
            if((a + b + c) % 2 != 0){
                cout << "First" << endl;
            }
            else{
                cout << "Second" << endl;
            }
        }
    }

    return 0;
}
