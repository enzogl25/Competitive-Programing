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
    while(n--){
        string s, s1; cin >> s >> s1;
        string r = "";
        int size = max(s.size(), s1.size());
        for(int i = 0; i < size; i++){
            if(i < s.size())r += s[i];
            if(i < s1.size())r += s1[i];
        }
        cout << r << endl;
    }
    return 0;
}