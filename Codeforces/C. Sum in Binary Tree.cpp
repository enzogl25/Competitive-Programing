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
    int n; cin >> n;
    while(n--){
        ll x; cin >> x;
        ll resp = 0;
        while(x >= 1){
            resp += x;
            x = x/2;
        }
        cout << resp << endl;
    }
    return 0;
}
