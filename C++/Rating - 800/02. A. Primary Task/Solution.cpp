//C++ Solution:
#include <iostream>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double dou;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout << fixed << setprecision(3);

int main()
{
    optimize();

    int t;
    cin >> t;

    while ( t-- ){
        int n;
        cin >> n;

        if ((n >= 102 && n <= 109) || (n >= 1010 && n <= 1099)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
