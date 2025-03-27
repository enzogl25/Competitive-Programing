#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
    _
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string s1; cin >> s1;
        bool ver = false;
        for(int i = 0; i < n; i++){

            if(s[i] != s1[i]){
                if((s[i] == 'G' and s1[i] == 'B') or (s[i] == 'B' and s1[i] == 'G')){
                    ver = true;          
               }
               else{
                    ver = false;
                    break;
               }
            }
            else{
                ver = true;
            }
            
        }
        if(ver)cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
    return 0;
}