#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

vector<vector<int>> g;
vector<int> likes;
vector<int> pics;

void bfs(int n) {
    queue<tuple<int,int,int>> q;

    q.emplace(n, 0 , 0);
    q.emplace(n, likes[n], 1);


    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        
        int v = get<0>(cur);
        int val = get<1>(cur);
        int pic = get<2>(cur);

        for(auto u : g[v]){
            if(pics[u] >= pic)continue;

            pics[u] = max(pics[u], pic);

            if(likes[u] > val){
                q.emplace(u, likes[u], pic + 1);
            }
            q.emplace(u, val, pic);
        }
        
    }

}
    
int main(){
    _
    int n;
    scanf("%d", &n);
    
    g.resize(n);
    likes.resize(n);
    pics.assign(n, 0); 

    for (int i = 1; i < n; i++) {
        int x;
        scanf("%d", &x);
        x--; 
        g[i].pb(x);
        g[x].pb(i);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &likes[i]);
    }

    bfs(0);


    for (int i = 1; i < n; i++) {
        printf("%d ", pics[i]);
    }
    printf("\n");

    return 0;
}
