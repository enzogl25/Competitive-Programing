#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

           
bool ok(ll x, ll a, ll b) {
    return (a + b >= 4 * x) && (min(a, b) >= x);
}
int main() {
    _
    int t; cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;
        ll l = 0;
        ll r = (a+b)/4;
        ll ans = -1;
        while(l <= r){
            ll mid = l + (r-l)/2;
            if(ok(mid, a, b)){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }

        }
        cout << ans << endl;
    }   
    return 0;
}