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

ll min_operation(string n, string possible_value){
    ll operation = 0;
    ll index = possible_value.size() - 1;
    for(auto i = n.size() - 1; i >= 0; i--){
        if(n[i] == possible_value[index]){
            index--;
            if(index < 0)
                break;
        }
        else
            operation++;
    }
    if(index >= 0)
        operation = LLONG_MAX;
    
    return operation;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--){
        string n;
        cin >> n;

        ll ans = LLONG_MAX;
        vector<string> possible_values = {"00", "25", "50", "75"};
        for(auto possible_value : possible_values)
            ans = min(ans, min_operation(n, possible_value));

        cout << ans << endl;
    }
    return 0;
}
