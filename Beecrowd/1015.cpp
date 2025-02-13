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
    double x1, y1; cin >> x1 >> y1;
    double x2, y2; cin >> x2 >> y2;

    double x = x2-x1;
    double y = y2-y1;
    double d = sqrt((x*x) + (y*y));
    printf("%.4lf\n", d);
    return 0;
}