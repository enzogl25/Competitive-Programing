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
    int a, b, c; cin >> a >> b >> c;
    int ab = max(a,b);
    int resp = max(ab,c);
    cout << resp << " eh o maior" << endl;
    return 0;
}