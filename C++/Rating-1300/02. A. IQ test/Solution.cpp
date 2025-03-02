//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

ll linear_search(ll n, ll num[]){
    ll odd_nums= 0, even_nums = 0;
    ll even_index = 0, odd_index = 0;
    for(ll i = 0; i < n; i++){
        if(num[i] % 2 == 0){
            even_nums++;
            even_index = i + 1;
        }
        else{
            odd_nums++;
            odd_index = i + 1;
        }
    }

    if(even_nums == 1)
        return even_index;
    else
        return odd_index;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll num[n];
    for(ll i = 0; i < n; i++){
        cin >> num[i];
    }

    ll result = linear_search(n, num);
    cout << result << endl;

    return 0;
}
