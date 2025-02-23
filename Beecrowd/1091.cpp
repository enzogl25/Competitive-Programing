#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

void solve(int x, int y, int n, int m){
    if(x > n and y > m)cout << "NE" << endl;
    else if(x > n and y < m)cout << "SE" << endl;
    else if(x < n and y < m)cout << "SO" << endl;
    else if(x < n and y > m)cout << "NO" << endl;
    else if(x == n or y == m)cout << "divisa" << endl;
}


int main() {
    _
    int k; cin >> k;
    while(k > 0){
        int n, m; cin >> n >> m;
        for(int i = 0; i < k; i++){
            int x, y; cin >> x >> y;
            solve(x,y, n, m);
        }
        cin >> k;
    }  
    return 0;
}