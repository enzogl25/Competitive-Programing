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
    double val = 0;
    for(int i = 0; i < 2; i++){
        int c, n;
        double v;
        cin >> c >> n >> v;
        val += n * v;
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", val);
    return 0;
}