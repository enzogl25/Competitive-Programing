#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int main() {
    _
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        if(s == "yes")cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
    return 0;
}