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
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int wrong = 0;
        for(int i = 0; i < 3; i++){
            if(s[i] == 'a' and i != 0)wrong++;
            else if(s[i] == 'b' and i != 1)wrong++;
            else if(s[i] == 'c' and i != 2)wrong++;
        }
        if(wrong == 3)cout << "NO" << endl;
        else cout << "YES" << endl;
    }   
    return 0;
}