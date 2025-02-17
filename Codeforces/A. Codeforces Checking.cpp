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
    unordered_map<char,int> mp;
    string s1 = "codeforces";
    for(int i = 0; i < s1.size(); i++){
        mp[s1[i]]++;
    }
    int t; cin >> t;
    while(t--){
        char ch; cin >> ch;
        if(mp[ch] != 0)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}