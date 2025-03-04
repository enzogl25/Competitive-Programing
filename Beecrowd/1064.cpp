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
    double total = 0;
    int cont = 0;
    for(int i = 0; i < 6; i++){
        double x; cin >> x;
        if(x > 0){
            cont++;
            total += x;
        }
    }   
    cout << cont << " valores positivos" << endl;
    double mean = total/cont;
    cout << fixed << setprecision(1) << mean << endl;

    return 0;
}