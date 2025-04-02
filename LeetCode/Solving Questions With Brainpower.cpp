#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        long long mostPoints(vector<vector<int>>& questions) {
            int size = questions.size();
            vector<long long> dp(size + 1,0);
            for(int i = size-1; i >= 0; i--){
                long long solve = questions[i][0];
                int nextIndex = i + questions[i][1] + 1;
                if(nextIndex < size){
                    solve += dp[nextIndex];
                    dp[i] = max(solve, dp[i+1]);
                }
                else{
                    if(i + 1 < size){
                        dp[i] = max(solve, dp[i+1]);
                    }
                    else{
                        dp[i] = solve;
                    }
                }
            } 
            return dp[0];
        }
    };