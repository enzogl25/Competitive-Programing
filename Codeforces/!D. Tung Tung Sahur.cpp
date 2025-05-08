#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define pb push_back
#define ppb pop_back
using ll = long long;

bool possible(const string& p, const string& s){
    int i = 0, j = 0;
    int n = p.size(), m = s.size();

    while (i < n && j < m) {
        if (i == n or j == m or p[0] != s[0])  return false;
                        
        
       int l = i, r = j;
       while(i < n and p[i] == p[l])i++;
       while(j < m and s[j] == s[r])j++;

        if(j - r < i - l and (i - l) * 2 < j - r)return false;
    }
    return true;
}

int main() {
    _
    int t; cin >> t;
    while(t--){
        string p; cin >> p;
        string s; cin >> s;

        string result = possible(p, s) ? "Yes" : "No";
        cout << result << endl;
    }   
    return 0;
}