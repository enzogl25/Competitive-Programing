#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int main() {
    //_
    string n; cin >> n;
    double s, v; cin >> s;
    cin >> v;
    double t = s + (v*0.15);
    printf("TOTAL = R$ %.2lf\n", t);
    return 0;
}