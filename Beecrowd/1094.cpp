#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    _
    int n; cin >> n;
    int c = 0, r = 0 , s = 0;
    while(n--){
        int q;
        char t;
        cin >> q >> t;
        if(t == 'C')c += q;
        if(t == 'R')r += q;
        if(t == 'S')s += q;
    }
    int total = c + r + s;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    double cp = (double)c / total * 100.00;
    double cr = (double)r / total * 100.00;
    double cs = (double)s / total * 100.00;
    cout << "Percentual de coelhos: ";
    cout << fixed << setprecision(2) << cp;
    cout << " %" << endl;
    cout << "Percentual de ratos: ";
    cout << fixed << setprecision(2) << cr;
    cout << " %" << endl;
    cout << "Percentual de sapos: ";
    cout << fixed << setprecision(2) << cs;
    cout << " %" << endl;
    return 0;
}