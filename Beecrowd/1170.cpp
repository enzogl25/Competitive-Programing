#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int solve(double x) {
    int cont = 0;
    while (x > 1) {
        x = x / 2;
        cont++;
    }
    return cont; 
}

int main() {
    _
    int n; 
    cin >> n; 
    while (n--) {
        double x; 
        cin >> x; 
        int resp = solve(x); 
        cout << resp << " dias" << endl;
    }   
    return 0;
}
