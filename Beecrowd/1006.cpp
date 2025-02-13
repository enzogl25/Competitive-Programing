#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int main() {
    double a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    a *= 2;
    b *= 3;
    c *= 5;
    double m = (a+b+c)/10;
    printf("MEDIA = %.1lf\n", m);
    return 0;
}