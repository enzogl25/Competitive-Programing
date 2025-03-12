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
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)cin >> v[i];
        sort(v.begin(), v.end());
        bool ok = true;
        for(int i = 1; i < n; i++){
            ok &= (v[i] - v[i-1] <= 1);
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;

    }   
    return 0;
}