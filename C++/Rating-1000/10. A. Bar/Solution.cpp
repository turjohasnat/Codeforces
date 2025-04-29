#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unordered_set<string> alcohol_name = {
        "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", 
        "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", 
        "WHISKEY", "WINE"
    };

    int cnt = 0;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;

        if(isdigit(a[0])){
            int age = stoi(a);
            if(age < 18)
                cnt++;
        }
        else{
            if(alcohol_name.find(a) != alcohol_name.end()){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
