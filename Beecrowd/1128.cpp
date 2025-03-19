#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;



void dfs(vector<vector<int>> &g, vector<int> &vis, int v){
    vis[v] = 1;
    for(auto u : g[v]){
        if(vis[u] == 0){
            dfs(g,vis,u);
        }
    }
}

bool visited(vector<int> &vis, int n) {
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) return false;
    }
    return true;
}
int main() {
    _
    int n, m;
    while(cin >> n >> m){
        if(n == 0 and m == 0)break;
        vector<vector<int>> g(n+1), gt(n+1);
        for(int i = 0; i < m; i++){
            int v,w,p; cin >> v >> w >> p;
            g[v].push_back(w);
            gt[w].push_back(v);
            
            if(p == 2){
                g[w].push_back(v);
                gt[v].push_back(w);
            }
        }
        vector<int> vis(n+1,0);
        dfs(g,vis,1);
        bool conexo = visited(vis,n);
        vis.assign(n+1,0);
        dfs(gt,vis, 1);
        bool conexot = visited(vis,n);
        cout << (conexo && conexot) << endl;        
    }   
    return 0;
}