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
    //cout << fixed << setprecision(5);
    double a,b,m;
    cin >> a;
    cin >> b;
    a *= 3.5; //a = a * 3.5;
    b *= 7.5; //b = b * 7.5;
    m = (a+b)/11;
    //cout << "MEDIA = " << m << endl;
    printf("MEDIA = %.5lf\n", m);
    return 0;
}