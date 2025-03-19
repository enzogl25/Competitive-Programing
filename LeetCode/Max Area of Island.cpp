#include <bits/stdc++.h>
using namespace std;

class Solution {
    int vis[51][51];
    int area = 0;
    vector<pair<int,int>> mov = {{1,0}, {-1, 0}, {0, 1}, {0,-1}};
    bool ok(int i, int j, int m, int n){
        return i >= 0 and i < m and j >= 0 and j < n;
    }
    void dfs(vector<vector<int>> &grid, int m, int n, int i, int j){
        vis[i][j] = 1;
        for(auto u : mov){
            int ni = u.first + i;
            int nj = u.second + j;
            if(ok(ni, nj, m, n)){
                if(grid[ni][nj] == '1'){
                    if(vis[ni][nj] == 0){
                        area++;
                        dfs(grid, m, n, ni, nj);
                    }
                }
            }
            
        }


    }
    public:
        int maxAreaOfIsland(vector<vector<int>>& grid) {
            int m = grid.size();
            int n = m > 0 ? grid[0].size() : 0;
            memset(vis, 0, sizeof(vis));
            int maxArea = 0;
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(grid[i][j] == 1 and vis[i][j] == 0){
                        area = 0;
                        dfs(grid, m, n, i, j);
                        maxArea = max(maxArea, area);
                    }
                }
            }
        }
    };