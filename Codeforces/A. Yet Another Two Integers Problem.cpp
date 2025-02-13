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
        ll n, m; cin >> n >> m;
        n = abs(n-m);
        ll cont = 0;
        for(int i = 10; i >= 1; i--){
            cont +=  n / i;
            n = n % i;
        }
        cout << cont << endl;   
    }
    return 0;
}