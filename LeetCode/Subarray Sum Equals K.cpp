#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            unordered_map<int,int> prefix_count;
            prefix_count[0] = 1;
            int count = 0, curr_sum = 0;
            for(int num : nums){
                curr_sum += num;

                if(prefix_count.count(curr_sum-k)){
                    count += prefix_count[curr_sum - k];
                }

                prefix_count[curr_sum]++;
            }
            
            return count;
            
        }
    };