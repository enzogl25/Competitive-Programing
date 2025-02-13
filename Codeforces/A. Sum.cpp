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
    while(n--){
        int x, y, z; cin >> x >> y >> z;
        if(x + y == z or x + z == y or y + z == x)cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
    return 0;
}