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
        string m; cin >> m;
        pair<int,int> pos = {0,0};
        pair<int,int> candy = {1,1};

        bool find = false;
        for(auto c : m){
            if(c == 'U')pos.s++;
            if(c == 'D')pos.s--;
            if(c == 'L')pos.f--;
            if(c == 'R')pos.f++;
            if(pos == candy){
                find = true;
                break;
            }    
        }
        if(find)cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
    return 0;
}