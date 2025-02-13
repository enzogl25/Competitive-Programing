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
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v[x-1] = i + 1;
    }
    for(auto u : v)cout << u << " ";
    return 0;
}