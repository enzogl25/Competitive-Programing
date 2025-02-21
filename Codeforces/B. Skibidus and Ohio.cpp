#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
//#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int main() {
    _
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        bool consecutive = false;
        for(int i = 0; i < (int)s.size() - 1; i++){
            if(s[i] == s[i+1]){
                consecutive = true;
                break;
            }
        }  
        if(consecutive)cout << 1 << endl;
        else cout << s.size() << endl;
        
    }
    
    return 0;
}