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
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        int v, a; cin >> v >> a;
        int vis[v];
        memset(vis, 0, sizeof vis);
        int g[v][v];
        memset(g, 0, sizeof g);
        for(int j = 0; j < a; j++){
            int x, y; cin >> x >> y;
            if(g[x][y] == 0 && g[y][x] == 0){
                g[x][y] = 1;
                g[x][y] = 1;
                vis[x]++;
                vis[y]++;
            }
        }
        int cont = 0;
        for(auto u : vis)cont += u;
        cout << cont << endl;
    }
    return 0;
}