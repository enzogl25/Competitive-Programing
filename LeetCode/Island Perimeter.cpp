#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<pair<int,int>> mov = {{1,0}, {-1, 0}, {0, 1}, {0,-1}};
    bool ok(int i, int j, int m, int n){
        return i >= 0 and i < m and j >= 0 and j < n;
    }
    public:
        int islandPerimeter(vector<vector<int>>& grid) {
            int perimeter = 0;
            int m = (int)grid.size();
            int n = m > 0 ? (int)grid[0].size() : 0;
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(grid[i][j] == 1){
                        for(auto u : mov){
                            int x = u.first + i;
                            int y = u.second + j;
                            if(ok(x,y, m, n)){
                                if(grid[x][y] == 0)perimeter++;
                            }
                            else perimeter++;
                        } 
                    }
                }
            }
            return perimeter;
        }
    };


    int main(){
        vector<vector<int>> grid = {
            {0, 1, 0, 0},
            {1, 1, 1, 0},
            {0, 1, 0, 0},
            {1, 1, 0, 0}
        };
        Solution sol;
        cout << sol.islandPerimeter(grid) << endl;
    }