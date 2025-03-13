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
    int n = -1;
    int alcool = 0, gasolina = 0, diesel = 0;
    while(n != 4){
        cin >> n;
        if(n == 1)alcool++;
        if(n == 2)gasolina++;
        if(n == 3)diesel++;
    }  
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}