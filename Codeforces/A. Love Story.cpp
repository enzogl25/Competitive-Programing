#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using ll = long long;

int main() {
    _
    string s = "codeforces";
    int n; cin >> n;
    while(n--){
        int cont = 0;
        string s1; cin >> s1;
        for(int i = 0; i < (int)s1.size(); i++){
            if(s1[i] != s[i])cont++;
        }
        cout << cont << endl;
    }
    
    return 0;
}