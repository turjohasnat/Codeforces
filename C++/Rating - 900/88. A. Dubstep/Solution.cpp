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

    string s;
    cin >> s;

    string final_string = "";
    for(auto i = 0; i < s.size(); ){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            final_string += ' ';
            i += 3;
        }
        else{
            final_string += s[i];
            i++;
        }
    }

    bool isFront = false;
    while (!final_string.empty()){
        if(final_string.back() == ' '){
            final_string.pop_back();
        }
        else if(final_string.front() == ' '){
            isFront = true;
            reverse(final_string.begin(), final_string.end());
            if(final_string.back() == ' '){
                final_string.pop_back();
            }
            else
                break;
        }
        else 
            break;
    }
    
    if(isFront){
        reverse(final_string.begin(), final_string.end());
        cout << final_string << endl;
    }
    else
        cout << final_string << endl;       
    
    return 0;
}
