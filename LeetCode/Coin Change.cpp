#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int coinChange(vector<int>& coins, int amount) {
            vector<int> dp(amount + 1, INT_MAX);
            dp[0] = 0;
            for(int i = 1; i <= amount; i++){
                for(auto u : coins) {
                    if (i >= u && dp[i - u] != INT_MAX) {
                        dp[i] = min(dp[i], 1 + dp[i - u]);
                    }
                }
            }
            if(dp[amount] == INT_MAX)return -1;
            else return dp[amount];
        }
    };

int main(){
    Solution sol;
    vector<int> v = {2};
    int target = 3;
    cout << sol.coinChange(v,target);
}