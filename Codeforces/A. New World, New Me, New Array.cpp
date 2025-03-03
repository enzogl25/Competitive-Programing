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
        int n, k, p; cin >> n >> k >> p;
        int ops = 0;
        if(abs(k) > n * p){
            cout << -1 << endl;
            continue;

        }
        while(abs(k) > 0){
            int val = min(abs(k), p);
            k -= (k > 0 ? val : -val);
            ops++;
        }
        cout << ops << endl;
    }   
    return 0;
}