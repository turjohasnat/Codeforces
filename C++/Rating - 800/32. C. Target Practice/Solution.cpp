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
    cin.ignore();

    int score[10][10] = {
                { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                { 1, 2, 2, 2, 2, 2, 2, 2, 2, 1 },
                { 1, 2, 3, 3, 3, 3, 3, 3, 2, 1 },
                { 1, 2, 3, 4, 4, 4, 4, 3, 2, 1 },
                { 1, 2, 3, 4, 5, 5, 4, 3, 2, 1 },
                { 1, 2, 3, 4, 5, 5, 4, 3, 2, 1 },
                { 1, 2, 3, 4, 4, 4, 4, 3, 2, 1 },
                { 1, 2, 3, 3, 3, 3, 3, 3, 2, 1 },
                { 1, 2, 2, 2, 2, 2, 2, 2, 2, 1 },
                { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
        };

    while( t-- ){
        int cnt = 0;
        for( int i = 0; i < 10; i++ ){
            for( int j = 0; j < 10; j++){
                char c;
                cin >> c;

                if( c == 'X' || c == 'x' ) cnt += score[i][j];
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
