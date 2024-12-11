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

    string guest, host, pile;
    cin >> guest >> host >> pile;

    vector<char> guestV(guest.begin(), guest.end());
    vector<char> hostV(host.begin(), host.end());
    vector<char> pileV(pile.begin(), pile.end());

    guestV.insert(guestV.end(), hostV.begin(), hostV.end());

    sort(guestV.begin(), guestV.end());
    sort(pileV.begin(), pileV.end());

    if( guestV == pileV ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
