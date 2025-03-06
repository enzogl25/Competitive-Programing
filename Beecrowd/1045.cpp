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
    double a,b,c;cin >> a >> b >> c;
    if(c > a)swap(a,c);
    if(b > a)swap(b,a);
    if(a >= b+c){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else{
        if((a*a) == (b*b) + (c*c))cout << "TRIANGULO RETANGULO" << endl;
        if((a*a) > (b*b) + (c*c))cout << "TRIANGULO OBTUSANGULO" << endl;
        if((a*a) < (b*b) + (c*c))cout << "TRIANGULO ACUTANGULO" << endl;

        if(a == b and b == c)cout << "TRIANGULO EQUILATERO" << endl;
        else if(a == b || b == c || a == c){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}