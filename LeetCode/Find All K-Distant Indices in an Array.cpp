#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> keys, resp;

        for(int i = 0; i < (int)nums.size(); i++){
            if(nums[i] == key)keys.push_back(i);
        }

        for(int i = 0; i < (int)nums.size(); i++){
            for(auto u : keys){
                if(abs(i - u) <= k){
                    resp.push_back(i);
                    break;
                }
            }
        }

        return resp;
    }
};