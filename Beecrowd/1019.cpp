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
    int h, m, s;
    h = n/3600;
    n = n % 3600;
    m = n/60;
    n = n % 60;
    s = n;
    cout << h << ":" << m << ":" << s << endl;   
    return 0;
    
}