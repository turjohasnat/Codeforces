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

    string digits;
    cin >> digits;

    string temp_digit = "";
    if(n % 2 == 0){
        for(auto i = 0; i < n;){
            temp_digit += digits[i];
            temp_digit += digits[i+1];
            temp_digit += '-';
            i += 2;
        }
    }
    else{
        for(auto i = 0; i < 3; i++){
            temp_digit += digits[i];
        }

        for(auto i = 3; i < n;){
            temp_digit += '-';
            temp_digit += digits[i];
            temp_digit += digits[i+1];
            i += 2;
        }
    }

    if(temp_digit.back() == '-')
        temp_digit.pop_back();

    cout << temp_digit << endl;

    return 0;
}

 
