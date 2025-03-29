#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;


const int maxN = 1e5 + 5,maxK = 501, inf = 1e16, LOGN = 21;
 
int anc[maxN][LOGN],d[maxN],sz[maxN],n,q;
vector<int>adj[maxN];
int LCA(int u, int v){
    if(d[u] < d[v]) swap(u,v);

    // u nó mais profundo
    // SOBE u ate v
    for(int i = LOGN - 1; i >= 0; i--){
        if(d[u] - (1 << i) >= d[v]){
            u = anc[u][i];
        }
    }

    if(u == v) return u;

    for(int i = LOGN - 1; i >= 0; i--){
        if(anc[u][i] != anc[v][i]){
            u = anc[u][i];
            v = anc[v][i];
        }
    }


    return anc[u][0];
}


void dfs(int v, int p = -1){
    anc[v][0] = p;
    sz[v] = 1;
    for(int u:adj[v]){
        if(u == p) continue;
        d[u] = d[v] + 1;
        dfs(u,v);

        sz[v] += sz[u];
    }
}


int main() {
    _    
    cin >> n;
 
    for(int i = 0; i< n-1; i++){
        int u,v;
        cin >> u >>v;
        
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < LOGN; j++){
            anc[i][j] = -1;
        }
    }


    dfs(1);
    for(int j = 1; j < LOGN; j++){
        for(int i = 1; i <= n; i++){
            if(anc[i][j-1] != -1){
                anc[i][j] = anc[anc[i][j-1]][j-1];
            }
        }
    }
    cin >> q;
    while(q--){
        int u,v;
        cin >> u >> v;

        if(d[u] < d[v]) swap(u,v);

        int lca = LCA(u,v);

        int dist = d[u] + d[v] - 2*d[lca];

        if(u == v){
            cout << n << endl;
            continue;
        }

        if(dist%2){
            cout << 0 << endl;
            continue;
        }
        dist /= 2;
        if(d[u] == d[v]){
            dist--;            
            for(int i = 0; i < LOGN; i++){
                if((1 << i) & dist)u = anc[u][i];
            }

            for(int i = 0; i < LOGN; i++){
                if((1 << i) & dist)v = anc[v][i];
            }
            cout << n - sz[u] - sz[v]<< endl;
        }
        else {
            int x = u, y = u;
            for(int i = 0; i < LOGN; i++){
                if((1 <<i) & dist)x = anc[x][i];
            }
            dist--;
            for(int i = 0; i < LOGN; i++){
                if((1<< i)& dist)y = anc[y][i];
            }
            cout << sz[x] - sz[y]<< endl;

        }
    }
    return 0;
}
    
