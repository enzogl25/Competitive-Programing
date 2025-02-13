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
    int x, y, z; cin >> x >> y >> z;
    int maxi = max(x,y);
    maxi = max(maxi, z);
    int mini = min(x,y);
    mini = min(mini, z);
    int resp = maxi - mini;
    cout << resp << endl;
    return 0;
}