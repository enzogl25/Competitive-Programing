#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
    _
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int maxletter = -1;
        for(auto c : s){
            int asc = c;
            maxletter = max(asc, maxletter);
        }
        int tam = (maxletter - 'a') + 1;
        cout << tam << endl;
    }   
    return 0;
}