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
    ll t; cin >> t;
    while(t--) {
        ll num = 0;
        ll n; cin >> n;
        
        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            num += x;
        }

        ll l = 1, r = sqrt(num) + 1; 
        bool ver = false;

        while (l <= r) {
            ll mid = l + (r - l) / 2;

            if (mid * mid == num) { 
                ver = true;
                break;
            }
            else if (mid * mid < num) l = mid + 1;
            else r = mid - 1;
        }

        if (ver) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
