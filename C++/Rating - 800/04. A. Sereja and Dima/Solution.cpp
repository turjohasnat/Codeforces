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
    for( int i = 0; i < n; i++ ) cin >> v[i];

    int sereja = 0, dima = 0, flag = 1;
    while( !v.empty() ){
        if( flag == 1 ){
            if ( *v.begin() > v.back() ){
                sereja += *v.begin();
                v.erase( v.begin() );
            }
            else{
                sereja += v.back();
                v.pop_back();
            }
            flag = 0;
        }
        else{
            if( flag == 0 ){
                if( *v.begin() > v.back() ){
                    dima += *v.begin();
                    v.erase( v.begin() );
                }
                else{
                    dima += v.back();
                    v.pop_back();
                }
            }
            flag = 1;
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
