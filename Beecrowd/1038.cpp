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
    cout << setprecision(3);
    int c, n; cin >> c >> n;
    vector<double> mp(6,0);
    mp[1] = 4.00;
    mp[2] = 4.50;
    mp[3] = 5.00;
    mp[4] = 2.00;
    mp[5] = 1.50;
    double v = mp[c] * n;
    printf("Total: R$ %.2lf\n", v);
    return 0;
}