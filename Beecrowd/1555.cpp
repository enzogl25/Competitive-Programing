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
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        ll rafael = ((3*x) * (3 * x)) + (y * y);
        ll beto = (2 * (x*x)) + ((5 * y) * (5 * y));
        ll carlos = (-100 * x) + (y * y * y);
        if(rafael > beto and rafael > carlos)cout << "Rafael ganhou" << endl;
        else if(beto > rafael and beto > carlos)cout << "Beto ganhou" << endl;
        else if(carlos > rafael and carlos > beto)cout << "Carlos ganhou" << endl;
    }
    return 0;
}