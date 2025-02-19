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
    double a,b,c; cin >> a >> b >> c;
    if(b + c <= a || a + b <= c || c + a <= b){
        cout << "Area = ";
        double area = ((a+b) * c)/2;
        cout << fixed << setprecision(1) << area << endl;
    }

    else{
        double perimetro = a + b + c;
        cout << "Perimetro = ";
        cout << fixed << setprecision(1) << perimetro << endl;
    }
    return 0;
}