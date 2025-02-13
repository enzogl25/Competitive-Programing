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
    int cont = 0;
    while(n--){
        int x, y; cin >> x >> y;
        if(y - x >= 2)cont++;
    }    
    cout << cont << endl;
    return 0;
}