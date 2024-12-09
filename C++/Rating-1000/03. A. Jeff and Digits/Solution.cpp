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

    int n;
    cin >> n;

    vector<int> v(n);
    int cnt5 = 0, cnt0 = 0;
    for( int i = 0; i < v.size(); i++ ){
        cin >> v[i];
        if( v[i] == 5 ) cnt5++;
        if( v[i] == 0 ) cnt0++;
    }

    if( cnt0 == 0 ){
        cout << "-1" << endl;
        return 0;
    }

    if( cnt5 < 9 ){
        cout << "0" << endl;
        return 0;
    }

    sort( v.rbegin(), v.rend() );

    string result;
    int cntFive = ( cnt5 / 9 ) * 9;
    for( int i = 0; i < cntFive; i++ ) result += "5";
    for( int i = 0; i < cnt0; i++ ) result += "0";
    cout << result << endl;

    return 0;
}
