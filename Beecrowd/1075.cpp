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
    if(n > 2)cout << 2 << endl;
    for(int i = n + 2; i <= 10000; i+=n)cout << i << endl;
    return 0;
}