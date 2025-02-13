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

    cout << 1 << " " << 1 << " " << 1 << endl;
    for(int i = 2; i <= n; i++){
        cout << i << " " << i * i << " " << i * i * i << endl;
    }
    return 0;
}