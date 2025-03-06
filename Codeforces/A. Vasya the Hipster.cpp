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
    int a, b; cin >> a >> b;
    cout << min(a,b) << " " << (max(a,b) - min(a,b))/2 << endl;
    return 0;
}