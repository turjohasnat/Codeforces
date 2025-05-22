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

    string s;
    cin >> s;

    ll cnt_X = count(s.begin(), s.end(), 'X');
    ll cnt_x = count(s.begin(), s.end(), 'x');
    
    if(cnt_X == cnt_x){
        cout << 0 << endl;

        for(auto i = 0; i < n; i++){
            cout << s[i];
        }

        cout << endl;
    }
    else{
        ll min_num = min(cnt_X, cnt_x);
        ll minutes = n/2 - min_num;
        cout << minutes << endl;

        if(cnt_X > cnt_x){
            for (auto i = 0; i < n; i++){
                if(s[i] == 'X' && minutes > 0){
                    cout << 'x';
                    minutes--;
                }
                else
                    cout << s[i];
            }
        }
        else{
            for (auto i = 0; i < n; i++){
                if(s[i] == 'x' && minutes > 0){
                    cout << 'X';
                    minutes--;
                }
                else
                    cout << s[i];
            }
        }

        cout << endl;
    }

    return 0;
}
