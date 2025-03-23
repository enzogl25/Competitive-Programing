#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    _
    int n; cin >> n;
    while(n--){
        double a, b, c; cin >> a >> b >> c;
        double mean = ((a*2) + (b*3) + (c*5))/10;
        cout << fixed << setprecision(1) << mean << endl; 
    }  
    return 0;
}