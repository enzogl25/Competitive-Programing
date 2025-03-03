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
    double n; cin >> n;
    if(n <= 2000){
        cout << "Isento" << endl;
    }   
    else{
       if(n <= 3000){
            double resp = (n - 2000) * 0.08;
            cout << fixed << setprecision(2) << "R$ " << resp << endl;
       }
       else if(n <= 4500){
            double resp = ((n - 3000) * 0.18) + (1000 * 0.08);
            cout << fixed << setprecision(2) << "R$ " << resp << endl;
       }
       else{
            double resp = ((n - 4500) * 0.28) + (1000 * 0.08) + (1500 * 0.18);
            cout << fixed << setprecision(2) << "R$ " << resp << endl;
       }
    }
    return 0;
}