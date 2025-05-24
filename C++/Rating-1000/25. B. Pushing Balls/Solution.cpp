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
        ll n, m;
        cin >> n >> m;

        char grid[n+10][m+10];
        for(auto i = 1; i <= n; i++){
            for(auto j = 1; j <= m; j++){
                cin >> grid[i][j];
            }
        }

        bool flag = false;
        for(auto i = 1; i <= n; i++){
            for(auto j = 1; j <= m; j++){
                if(grid[i][j] == '1'){
                    ll cnt_1 = 0, cnt_2 = 0;
                    for(auto l = i; l >= 1; l--){
                        cnt_1++;
                        if(grid[l][j] == '1'){
                            cnt_2++;
                        }    
                    }

                    if(cnt_1 != cnt_2){
                        ll cnt_3 = 0, cnt_4 = 0;
                        for(auto l = j; l >= 1; l--){
                            cnt_3++;
                            if(grid[i][l] == '1'){
                                cnt_4++;
                            }
                        }

                        if(cnt_3 != cnt_4){
                            flag = true;
                            break;
                        }
                    }
                }
            }

            if(flag)
                break;
        }

        if(flag)
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }

    return 0;
}
