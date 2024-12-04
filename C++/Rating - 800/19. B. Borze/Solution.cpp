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

    string s;
    cin >> s;

    for( int i = 0; i < s.size(); i++ ){
        if(s[i] == '.') cout << '0';
        else{
            if(s[i+1] == '.') cout << '1';
            else cout << '2';
            i++;
        }
    }
    return 0;
}
