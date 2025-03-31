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
        int a1, a2, b1, b2; cin >> a1 >> a2 >> b1 >> b2;
        vector<tuple<int,int,int,int>> v;
        v.push_back({a1, b1, a2, b2});
        v.push_back({a1, b2, a2, b1});
        v.push_back({a2, b2, a1, b1});
        v.push_back({a2, b1, a1, b2});
        int cont = 0;
        for(auto u : v){
            int a, b, c, d;
            tie(a, b, c, d) = u;
            int win_suneet = 0;
            int win_slavic = 0;
            if (a > b) win_suneet++;
            else if (a < b) win_slavic++;
            if (c > d) win_suneet++;
            else if (c < d) win_slavic++;
            if (win_suneet > win_slavic) cont++;
        }
        cout << cont << endl;
    }
    return 0;
}
