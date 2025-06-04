#include <bits/stdc++.h>

using namespace std;


class Solution {
    vector<vector<int>> v;
    
    int i = 0;
    void gerarcombinacoes(vector<int>& nums, vector<int>& atu, vector<bool>&vis){

        if(atu.size() == nums.size()){
            v.push_back(atu);
            return;
        }

        for(int i = 0; i < (int)nums.size(); i++){
            if(vis[i])continue;
            vis[i] = true;
            atu.push_back(nums[i]);
            gerarcombinacoes(nums, atu, vis);
            atu.pop_back();
            vis[i] = false;
        }
    }

public:
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> atu;
        vector<bool> vis(nums.size(), false);
        gerarcombinacoes(nums, atu, vis);
        return v;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> p = sol.permute(nums);

    for (int i = 0; i < (int)p.size(); i++) {
        for (int j = 0; j < (int)p[i].size(); j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}