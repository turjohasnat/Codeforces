//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dou;

#define endl "\n"
#define PI (2.0 * acos(0.0))

const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

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
        string s;
        cin >> s;

        string h = "", m = "";

        bool ok = true;
        for(ll i = 0; i < s.size(); i++){
            if(s[i] != ':' && ok){
                h += s[i];
            }
            else if(s[i] == ':')
                ok = false;
            else
                m += s[i];
        }

        ll hour = stoll(h), minutes = stoll(m);
        
        bool isPM = false;
        if(hour > 11){
            isPM = true;

            if(hour > 12)
                hour -= 12;
        }

        string temp_h = to_string(hour);
        
        string final_h = "";
        if(temp_h.size() < 2){
            final_h += '0';
            final_h += temp_h;
        }
        else
            final_h = temp_h;

        string temp_m = to_string(minutes);
        string final_m = "";
        if(temp_m.size() < 2){
            final_m += '0';
            final_m += temp_m;
        }
        else
            final_m = temp_m;

        if(isPM){
            cout << final_h << ":" << final_m << " PM" << endl;
        }
        else{
            if(hour == 00)
                cout << 12 << ":" << final_m << " AM" << endl;
            else
                cout << final_h << ":" << final_m << " AM" << endl;
        }

    }
    
    return 0;
}
 
