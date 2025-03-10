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
    string s; cin >> s;
    string s1 = "";
    unordered_map<char,int> mp;
    for(int i = s.size() - 1; i >= 0; i--){
        if(mp[s[i]] == 0)mp[s[i]]++;
        else{
            cout << i + 1 << endl;
            return 0;
         }
    }
    return 0;
}