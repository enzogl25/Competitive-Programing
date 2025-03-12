#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

void dfs(int x, int i,  vector<vector<int>> &g, vector<vector<int>> &team, vector<int> &vis){
    vis[x] = 1;
    team[i].push_back(x);

    for(auto u : g[x]){
        if(vis[u] == 0)dfs(u,i,g,team,vis);
    }
}


int main() {
    _
    int t; cin >> t;
    for (int case_num = 1; case_num <= t; case_num++) {
        int v, e; cin >> v >> e;
        vector<vector<int>> g(v);   
        vector<vector<int>> team(v);
        vector<int> vis(v, 0);      

        for (int i = 0; i < e; i++) {
            char x, y; cin >> x >> y;
            int u = x - 'a';
            int v = y - 'a';
            g[u].push_back(v);
            g[v].push_back(u);
        }

        int linked = 0;
        for (int i = 0; i < v; i++) {
            if (vis[i] == 0) { 
                dfs(i, linked, g, team, vis);
                linked++;
            }
        }

        cout << "Case #" << case_num << ":\n";
        for (int i = 0; i < linked; i++) {
            sort(team[i].begin(), team[i].end()); 
            for (int node : team[i]) {
                cout << char(node + 'a') << ",";
            }
            cout << "\n";
        }
        
        cout << linked << " connected components\n\n";
        cout.flush();
    }

    return 0;
}