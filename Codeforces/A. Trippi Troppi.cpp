#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    _
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int n = s.size();
        string an = "";
        an += s[0];
        for(int i = 1; i < n; i++){
            if(isspace(s[i])){
                an += s[i+1];
            }
        }
        cout << an << endl;
    }   
    return 0;
}