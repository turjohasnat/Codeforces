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

const int mx = 5e3+123;
int a[mx];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> freq;

    int n;
    cin >> n;
    for( int i = 0; i < n; i++ ){
        cin >> a[i];
        freq[a[i]]++;
    }

    int boxes = 0;
    for( int i = 0; i < n; i++ ) boxes = max( boxes, freq[a[i]] );
    cout << boxes << endl;

    return 0;
}
 
