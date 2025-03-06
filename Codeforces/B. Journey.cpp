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
        ll n,a,b,c; cin >> n >> a >> b >> c;
        ll x = a + b + c;
        ll l = 1;
        ll r = n;
        ll ans = -1;
        while(l <= r){
         ll mid = l + (r - l) / 2;
         ll val = (mid / 3) * x;
         ll mod = mid % 3;
         if(mod == 1)val += a;
         else if(mod == 2)val += a + b;
         if(val >= n){
            ans = mid;
            r = mid - 1;
         }
         else l = mid + 1;
        }
        cout << ans << endl;
    }   
    return 0;
}