#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define ppb pop_back
using ll = long long;

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int min_change = 0;
    for(int i = 0; i < k; i++){
        if(s[i] == 'W')min_change++;
    }
    int window_change = min_change;
    for(int i = k; i < n; i++){
        if(s[i - k] == 'W')window_change--; 
        if(s[i] == 'W')window_change++;
        min_change = min(min_change, window_change);
    }
    cout << min_change << endl;

}


int main() {
    _
    int t; cin >> t;
    while(t--){
        solve();
    }   
    return 0;
}