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
    string m, n, s; cin >> m >> n >> s;
    string mn = m+n;
    sort(mn.begin(), mn.end());
    sort(s.begin(), s.end());
    if(s == mn)cout << "YES" << endl;
    else cout << "NO" << endl;   
    return 0;
}