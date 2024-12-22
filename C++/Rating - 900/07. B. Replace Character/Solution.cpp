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
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> occ(26);
        for(int i = 0; i < n; i++){
            occ[s[i] - 'a']++;
        }

        pair<pair<int,char>,int> low, high;
        low = high = {{occ[s[0] - 'a'], s[0]}, 0};

        for(int i = 1; i < n; i++){
            low = min(low, {{occ[s[i] - 'a'], s[i]}, i});
            high = max(high, {{occ[s[i] - 'a'], s[i]}, i});
        }
        s[low.second] = s[high.second];
        cout << s << endl;
    }
    return 0;
}
