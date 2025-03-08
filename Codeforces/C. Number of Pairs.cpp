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
        int n,l,r; cin >> n >> l >> r;
        vector<int> v(n);
        for(int i = 0; i < n; i++)cin >> v[i];
        sort(v.begin(), v.end());
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ans += upper_bound(v.begin(), v.end(), r - v[i]) - v.begin();
            ans -= lower_bound(v.begin(), v.end(), l - v[i]) - v.begin();
            if (l <= 2 * v[i] && 2 * v[i] <= r)ans--;
    
        }
        cout << ans / 2 << endl;
    }   
    return 0;
}