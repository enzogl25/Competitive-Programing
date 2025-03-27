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
        unordered_map<int,int> mp;
        bool ver = true;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(mp[x] > 0){
                ver = false;
            }
            mp[x]++;
        }
        if(ver)cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
    return 0;
}