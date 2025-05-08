#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

void solve(){
    int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for(int i = 0; i < m; i++) 
            cin >> a[i];

        vector<ll> cap(n+2, 0);
        for(int x : a) 
            cap[x]++;

        for(int k = n; k >= 1; k--){
            cap[k] += cap[k+1];
        }

        ll ans = 0;
        for(int k = 1; k <= n-1; k++){
            ll left_choices  = cap[k];
            ll right_choices = cap[n-k];
            ll same_color = cap[max(k, n-k)];
            ans += left_choices * right_choices - same_color;
        }

        cout << ans << endl;
}

int main() {
    _
    int t; cin >> t;
    while(t--){
        solve();
    }   
    return 0;
}