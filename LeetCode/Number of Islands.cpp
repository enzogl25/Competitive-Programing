#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<pair<int,int>> mov = {{1,0}, {-1, 0}, {0, 1}, {0,-1}};
    int vis[300][300];
    bool ok(int i, int j, int m, int n){
        return i >= 0 and i < m and j >= 0 and j < n;
    }
    void dfs(int i, int j, int m, int n, vector<vector<char>>& grid){
        vis[i][j] = 1;
        for(auto u : mov){
            int ni = u.first + i;
            int nj = u.second + j;
            if(ok(ni, nj, m, n)){
                if(grid[ni][nj] == '1'){
                    if(vis[ni][nj] == 0){
                        dfs(ni,nj, m, n, grid);
                    }
                }
            }
            
        }

    }


    public:
        int numIslands(vector<vector<char>>& grid) {
            int m = grid.size();
            int n = m > 0 ? grid[0].size() : 0;
            memset(vis, 0, sizeof(vis));
            int islands = 0;
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(grid[i][j] == '1'){
                        if(vis[i][j] == 0){
                            islands++;
                            dfs(i, j, m, n, grid);
                        }
                    }
                }
            }
            return islands;
        }
    };


    int main(){
        vector<vector<char>> grid = {
            {'1', '1', '1', '1', '0'},
            {'1', '1', '0', '1', '0'},
            {'1', '1', '0', '0', '0'},
            {'0', '0', '0', '0', '0'}
        };
        Solution sol;
        cout << sol.numIslands(grid) << endl;
    }
