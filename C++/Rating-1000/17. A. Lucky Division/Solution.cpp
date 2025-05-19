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
    
    int luckyNumbers[14] = {4, 7, 44, 47, 74, 77, 444, 447,
    474, 477, 744, 747, 774, 777};

    bool isLucky = false;
    for(auto i = 0; i < 14; i++){
        if(n % luckyNumbers[i] == 0){
            isLucky = true;
            break;
        }
    }

    if(isLucky)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
    return 0;
}
