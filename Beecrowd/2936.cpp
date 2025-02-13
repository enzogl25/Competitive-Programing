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
    int c, b, bo, m, l; cin >> c >> b >> bo >> m >> l;
    int resp = 0;
    resp = (c * 300) + (b * 1500) + (bo * 600) + (m * 1000) + (l * 150) + 225; 
    cout << resp << endl;
    return 0;
}