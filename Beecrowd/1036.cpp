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
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    double delta = (b * b) - (4 * a * c);

 
    if (delta < 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    double x1 = ((-b) + sqrt(delta)) / (2 * a);
    double x2 = ((-b) - sqrt(delta)) / (2 * a);

    printf("R1 = %.5lf\n", x1);
    printf("R2 = %.5lf\n", x2);

    return 0;
}
