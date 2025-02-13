#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    using ll = long long;
    ll n;
    cin >> n;
 
    
    ll acc[64] = {}; 
 
   
    for (ll i = 0; i < n; ++i) {
        ll x;
        cin >> x;
        for (ll j = 0; j < 64; ++j) {
            if (x & 1) {
                acc[j]++;
            }
            x >>= 1;
        }
    }
 
    for (ll i = 0; i < n; ++i) {
        ll x = 0;
        ll bit = 1;
        for (ll j = 0; j < 64; ++j) {
            if (acc[j] > 0) {
                x |= bit;
                acc[j]--;
            }
            bit <<= 1;
        }
        if (i > 0) {
            cout << " ";
        }
        cout << x;
    }
    cout << endl;
 
 
}