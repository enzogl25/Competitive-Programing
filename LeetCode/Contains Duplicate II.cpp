#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        bool containsNearbyDuplicate(vector<int>& nums, int k) {
            unordered_map<int,int> mp;
            int n = (int)nums.size();
            for(int i = 0; i < n; i++){
                if(mp[nums[i]] != 0){
                    if(abs(i - nums[i] + 1) <= k)return true;
                    else{
                        mp[nums[i]] = i+1;
                    }
                }
                else{
                    mp[nums[i]] = i + 1;
                }
            }
            return false;
        }
    };