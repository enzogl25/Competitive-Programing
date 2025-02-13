#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using ll = long long;

int main() {
    _
    int n;
    while (scanf("%d", &n), n != 0) {
        ll xor_all = 0;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
            xor_all ^= arr[i];
        }

        ll diff_bit = xor_all & -xor_all;

        ll x = 0, y = 0;
        for (ll num : arr) {
            if (num & diff_bit) x ^= num; 
            else y ^= num; 
        }

        if (x > y) swap(x, y);
        printf("%lld %lld\n", x, y);
    }
    return 0;
}
