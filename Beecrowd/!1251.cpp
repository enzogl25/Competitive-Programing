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
    string s; 
    while(cin >> s){
        unordered_map<int, int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto u : mp){
            v.push_back({u.second, u.first});
        }
         sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
            return (a.f == b.f) ? (a.s > b.s) : (a.f < b.f); 
        });
        for(auto u : v){
            cout << u.s << " " << u.f << endl;
        }
    }
    return 0;
}