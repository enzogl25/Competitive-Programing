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
    ll n; cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for(auto &e : v){
        cin >> e;
        sum += e;
    }
    if(sum % 2 != 0){
       cout << "-1" << endl; 
        return 0;
    }
   
    ll target = sum/2;
     vector<vector<bool>> dp(n+1, vector<bool>(target+1, false));   
 
    for(int i = 0; i <= n; i++){
        dp[i][0] = true;
    }
 
    for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= target; j++) {
        if (j >= v[i-1]) {
            dp[i][j] = dp[i-1][j] || dp[i-1][j - v[i-1]];
        } 
        else {
            dp[i][j] = dp[i-1][j];
            }
        }
    }
 
    
 
     if(!dp[n][target]) {
        cout << "-1" << endl;
        return 0;
    }
 
   
 
    ll i = n, j = target;
    vector<ll> subc1, subc2;
    
    while(i > 0 && j > 0) {
        
        if(dp[i-1][j]) { 
            subc2.pb(v[i-1]);
            i--;
        } else { 
            subc1.pb(v[i-1]);
            j -= v[i-1];
            i--;
        }
    }
 
   
 
      while(i > 0) {
        subc2.pb(v[i-1]);
        i--;
    }
    vector<ll> resp;
    ll ana = 0, bob = 0, ac = 0, bc = 0;
    while(resp.size() != n){
        if(ana <= bob){
            resp.pb(subc1[ac]);
            ana += subc1[ac];
            ac++;
        }
        else{
           resp.pb(subc2[bc]);
            bob += subc2[bc];
            bc++; 
        }
    }
    for(auto e : resp)cout << e << " ";
    cout << endl;
   
   
}