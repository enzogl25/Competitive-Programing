#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int main() {
   // _
    double a,b,c; cin >> a >> b >> c;
    double tri = (a*c)/2; // b * h / 2
    printf("TRIANGULO: %.3lf\n", tri);
    double cir = c * c * 3.14159; //pi * r^2
    printf("CIRCULO: %.3lf\n", cir);
    double tra = ((a+b) * c)/2; // ((B+b) * h)/ 2
    printf("TRAPEZIO: %.3lf\n", tra);
    double qua = b * b; // l * l
    printf("QUADRADO: %.3lf\n", qua);
    double ret = a * b; // b * h;
    printf("RETANGULO: %.3lf\n", ret);
    return 0;
}