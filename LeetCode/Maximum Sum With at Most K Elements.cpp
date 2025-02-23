#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        vector<pair<int,int>> v;
        for(int i = 0; i < grid.size(); i++){
            for(int num : grid[i]){
                v.push_back({num, i});
            }
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        long long cont = 0;
        for(int i = 0; i < v.size(); i++){
            if(limits[v[i].second] != 0 and k > 0){
                cont += v[i].first;
                limits[v[i].second]--;
                k--;
            }
        }
        return cont;
    }
};

int main(){
    vector<vector<int>> v = {{1,2}, {3,4}};
    vector<int> limits = {1,2};
    Solution sol;
    cout << sol.maxSum(v, limits, 2);
}