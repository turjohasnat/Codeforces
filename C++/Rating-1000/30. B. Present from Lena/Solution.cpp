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

    if(n == 2){
        cout << "    0"  << endl;
        cout << "  0 1 0"  << endl;
        cout << "0 1 2 1 0"  << endl;
        cout << "  0 1 0"  << endl;
        cout << "    0"  << endl;
    }
    else if(n == 3){
        cout << "      0"  << endl;
        cout << "    0 1 0"  << endl;
        cout << "  0 1 2 1 0"  << endl;
        cout << "0 1 2 3 2 1 0" << endl;
        cout << "  0 1 2 1 0"  << endl;
        cout << "    0 1 0"  << endl;
        cout << "      0"  << endl;
    }
    else if(n == 4){
        cout << "        0"  << endl;
        cout << "      0 1 0"  << endl;
        cout << "    0 1 2 1 0"  << endl;
        cout << "  0 1 2 3 2 1 0" << endl;
        cout << "0 1 2 3 4 3 2 1 0" << endl;
        cout << "  0 1 2 3 2 1 0" << endl;
        cout << "    0 1 2 1 0"  << endl;
        cout << "      0 1 0"  << endl;
        cout << "        0"  << endl;
    }
    else if(n == 5){
        cout << "          0"  << endl;
        cout << "        0 1 0"  << endl;
        cout << "      0 1 2 1 0"  << endl;
        cout << "    0 1 2 3 2 1 0" << endl;
        cout << "  0 1 2 3 4 3 2 1 0" << endl;
        cout << "0 1 2 3 4 5 4 3 2 1 0" << endl;
        cout << "  0 1 2 3 4 3 2 1 0" << endl;
        cout << "    0 1 2 3 2 1 0" << endl;
        cout << "      0 1 2 1 0"  << endl;
        cout << "        0 1 0"  << endl;
        cout << "          0"  << endl;
    }
    else if(n == 6){
        cout << "            0"  << endl;
        cout << "          0 1 0"  << endl;
        cout << "        0 1 2 1 0"  << endl;
        cout << "      0 1 2 3 2 1 0" << endl;
        cout << "    0 1 2 3 4 3 2 1 0" << endl;
        cout << "  0 1 2 3 4 5 4 3 2 1 0" << endl;
        cout << "0 1 2 3 4 5 6 5 4 3 2 1 0" << endl;
        cout << "  0 1 2 3 4 5 4 3 2 1 0" << endl;
        cout << "    0 1 2 3 4 3 2 1 0" << endl;
        cout << "      0 1 2 3 2 1 0" << endl;
        cout << "        0 1 2 1 0"  << endl;
        cout << "          0 1 0"  << endl;
        cout << "            0"  << endl;
    }
    else if(n == 7){
        cout << "              0"  << endl;
        cout << "            0 1 0"  << endl;
        cout << "          0 1 2 1 0"  << endl;
        cout << "        0 1 2 3 2 1 0" << endl;
        cout << "      0 1 2 3 4 3 2 1 0" << endl;
        cout << "    0 1 2 3 4 5 4 3 2 1 0" << endl;
        cout << "  0 1 2 3 4 5 6 5 4 3 2 1 0" << endl;
        cout << "0 1 2 3 4 5 6 7 6 5 4 3 2 1 0" << endl;
        cout << "  0 1 2 3 4 5 6 5 4 3 2 1 0" << endl;
        cout << "    0 1 2 3 4 5 4 3 2 1 0" << endl;
        cout << "      0 1 2 3 4 3 2 1 0" << endl;
        cout << "        0 1 2 3 2 1 0" << endl;
        cout << "          0 1 2 1 0"  << endl;
        cout << "            0 1 0"  << endl;
        cout << "              0"  << endl;
    }
    else if(n == 8){
        cout << "                0"  << endl;
        cout << "              0 1 0"  << endl;
        cout << "            0 1 2 1 0"  << endl;
        cout << "          0 1 2 3 2 1 0" << endl;
        cout << "        0 1 2 3 4 3 2 1 0" << endl;
        cout << "      0 1 2 3 4 5 4 3 2 1 0" << endl;
        cout << "    0 1 2 3 4 5 6 5 4 3 2 1 0" << endl;
        cout << "  0 1 2 3 4 5 6 7 6 5 4 3 2 1 0" << endl;
        cout << "0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0" << endl;
        cout << "  0 1 2 3 4 5 6 7 6 5 4 3 2 1 0" << endl;
        cout << "    0 1 2 3 4 5 6 5 4 3 2 1 0" << endl;
        cout << "      0 1 2 3 4 5 4 3 2 1 0" << endl;
        cout << "        0 1 2 3 4 3 2 1 0" << endl;
        cout << "          0 1 2 3 2 1 0" << endl;
        cout << "            0 1 2 1 0"  << endl;
        cout << "              0 1 0"  << endl;
        cout << "                0"  << endl;
    }
    else if(n == 9){
        cout << "                  0"  << endl;
        cout << "                0 1 0"  << endl;
        cout << "              0 1 2 1 0"  << endl;
        cout << "            0 1 2 3 2 1 0" << endl;
        cout << "          0 1 2 3 4 3 2 1 0" << endl;
        cout << "        0 1 2 3 4 5 4 3 2 1 0" << endl;
        cout << "      0 1 2 3 4 5 6 5 4 3 2 1 0" << endl;
        cout << "    0 1 2 3 4 5 6 7 6 5 4 3 2 1 0" << endl;
        cout << "  0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0" << endl;
        cout << "0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0" << endl;
        cout << "  0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0" << endl;
        cout << "    0 1 2 3 4 5 6 7 6 5 4 3 2 1 0" << endl;
        cout << "      0 1 2 3 4 5 6 5 4 3 2 1 0" << endl;
        cout << "        0 1 2 3 4 5 4 3 2 1 0" << endl;
        cout << "          0 1 2 3 4 3 2 1 0" << endl;
        cout << "            0 1 2 3 2 1 0" << endl;
        cout << "              0 1 2 1 0"  << endl;
        cout << "                0 1 0"  << endl;
        cout << "                  0"  << endl;
    }

    return 0;
}
