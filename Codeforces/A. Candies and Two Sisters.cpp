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
        ll x; cin >> x;
        if(x <= 2){
            cout << 0 << endl;
            continue;
        }

        if(x % 2 == 0)cout << (x/2) -1 << endl;
        else if(x % 2 != 0) cout << x/2 << endl;
    }   
    return 0;
}