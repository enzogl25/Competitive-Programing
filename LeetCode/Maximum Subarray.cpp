#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int soma_ant = INT_MIN;
        int ans = INT_MIN;

        for(int i = 0; i < (int)nums.size(); i++){
            if(soma_ant < 0)soma_ant = 0;
            soma_ant += nums[i];
            ans = max(soma_ant, ans);
            
        }
        return ans;
    }
};