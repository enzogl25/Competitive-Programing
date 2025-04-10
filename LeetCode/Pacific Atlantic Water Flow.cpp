#include <bits/stdc++.h>
using namespace std;


class Solution {
    
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = (int)heights.size();
        int n = m > 0 ? heights[0].size() : 0;
        vector<pair<int,int>> mov  = {{1,0}, {-1, 0}, {0, 1}, {0, -1}};
        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>> atlantic(m, vector<bool>(n, false));
        auto bfs = [&](queue<pair<int, int>>& q, vector<vector<bool>>& visited) {
            while (!q.empty()) {
                auto cur = q.front(); 
                q.pop();
                for (auto u : mov) {
                    int nx = cur.first + u.first, ny = cur.second + u.second;
                    if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
                    if (visited[nx][ny]) continue;
                    if (heights[nx][ny] < heights[cur.first][cur.second]) continue;
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        };
        queue<pair<int, int>> pq, aq;
        for (int i = 0; i < m; i++) {
            pq.push({i, 0});
            aq.push({i, n - 1});
            pacific[i][0] = true;
            atlantic[i][n - 1] = true;
        }
        for (int j = 0; j < n; j++) {
            pq.push({0, j});
            aq.push({m - 1, j});
            pacific[0][j] = true;
            atlantic[m - 1][j] = true;
        }

        bfs(pq, pacific);
        bfs(aq, atlantic);

        vector<vector<int>> res;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pacific[i][j] && atlantic[i][j]) {
                    res.push_back({i, j});
                }
            }
        }

        return res;
          
    }
};