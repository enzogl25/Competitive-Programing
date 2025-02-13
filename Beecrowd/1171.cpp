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
    map<int,int> mp;
    while(n--){
        int x; cin >> x;
        mp[x]++;
    }   
    vector<pair<int,int>> v;
    for(auto u : mp){
        v.push_back({u.first, u.second});
    }
    sort(v.begin(), v.end());
    for(auto u : v){
        cout << u.first << " aparece " << u.second << " vez(es)" << endl;
    }
    return 0;
} 