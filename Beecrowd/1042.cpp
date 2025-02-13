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
    vector<int> v, v1;
    for(int i = 0; i < 3; i++){
        int n; cin >> n;
        v.pb(n);
        v1.pb(n);
    } 
    sort(v.begin(), v.end());
    for(auto u : v)cout << u << endl;
    cout << endl;
    for(auto u : v1)cout << u << endl;  
    return 0;
}