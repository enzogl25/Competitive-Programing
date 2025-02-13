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
    double r; cin >> r;
    double n = 3.14159;
    double r3 = pow(r,3);
    double v = (4.0/3) * n * r3;
    printf("VOLUME = %.3lf\n", v);
}