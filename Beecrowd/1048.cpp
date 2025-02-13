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
    double n; 
    cin >> n;

    if (n <= 400) {
        double s = n + (n * 0.15);
        double r = n * 0.15;
        printf("Novo salario: %.2lf\n", s);
        printf("Reajuste ganho: %.2lf\n", r);
        printf("Em percentual: 15 %%\n");
    } 
    else if (n <= 800) {
        double s = n + (n * 0.12);
        double r = n * 0.12;
        printf("Novo salario: %.2lf\n", s);
        printf("Reajuste ganho: %.2lf\n", r);
        printf("Em percentual: 12 %%\n");
    } 
    else if (n <= 1200) {
        double s = n + (n * 0.10);
        double r = n * 0.10;
        printf("Novo salario: %.2lf\n", s);
        printf("Reajuste ganho: %.2lf\n", r);
        printf("Em percentual: 10 %%\n");
    } 
    else if (n <= 2000) {
        double s = n + (n * 0.07);
        double r = n * 0.07;
        printf("Novo salario: %.2lf\n", s);
        printf("Reajuste ganho: %.2lf\n", r);
        printf("Em percentual: 7 %%\n");
    } 
    else {
        double s = n + (n * 0.04);
        double r = n * 0.04;
        printf("Novo salario: %.2lf\n", s);
        printf("Reajuste ganho: %.2lf\n", r);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
