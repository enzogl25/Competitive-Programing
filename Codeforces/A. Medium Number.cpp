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
    int t; cin >> t;
    while(t--){
        vector<int> v(3);
        for(int i = 0; i < 3; i++)cin >> v[i];
        sort(v.begin(), v.end());
        cout << v[1] << endl;
    }
    return 0;
}