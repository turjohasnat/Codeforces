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

    vector<int> v;
    int n;

    for( int i = 0; i < s.size(); i++ ){
        if(s[i] != '+' ){
            n = s[i] - '0';
            v.push_back(n);
        }
    }
    sort(v.begin(), v.end());

    for( int i = 0; i < v.size(); i++ ){
        cout << v[i];
        
        if( i >= 0 && i < v.size()-1){
            cout << "+";
        }
    }
    return 0;
}
