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

    int n, m;
    cin >> n >> m;

    map<string, string> ipName;

    while( n-- ){
        string name, ip;
        cin >> name >> ip;

        ipName[ip] = name;
    }

    while( m-- ){
        string sName, ip;
        cin >> sName >> ip;

        ip.pop_back();
        cout << sName << " " << ip << "; #" << ipName[ip] << endl;
    }
    return 0;
}
 
