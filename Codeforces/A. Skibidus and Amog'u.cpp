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
        string s; cin >> s;
        string s1 = s.substr(0, s.size() - 2);
        cout << s1 + "i" << endl;
    }   
    return 0;
}