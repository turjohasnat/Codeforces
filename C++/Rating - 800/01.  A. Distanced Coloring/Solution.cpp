//C++ Solution:
#include <iostream>
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
        int m, n, k;
        cin >> m >> n >> k;

        int minNum = min( m, k ) * min( n, k );
        cout << minNum << endl;
    }
    return 0;
}
