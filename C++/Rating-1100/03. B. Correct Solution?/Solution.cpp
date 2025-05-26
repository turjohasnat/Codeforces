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

    string n, m;
    cin >> n >> m;

    ll cnt_0 = 0;
    for(auto u : n){
        if(u == '0')
            cnt_0++;
    }

    sort(n.begin(), n.end());

    string temp_n = "";
    if(cnt_0 > 0){
        for(ll i = 0; i < n.size(); i++){
            if(n[i] != '0'){
                temp_n += n[i];
                break;
            }
        }

        for(ll i = 0; i < cnt_0; i++)
            temp_n += '0';

        cnt_0++;
        for(ll i = cnt_0; i < n.size(); i++)
            temp_n += n[i];
    }
    else 
        temp_n = n; 


    if(temp_n == m)
        cout << "OK" << endl;
    else 
        cout << "WRONG_ANSWER" << endl;

    return 0;
}

 
