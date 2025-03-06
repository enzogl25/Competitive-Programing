#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            unordered_set<int> st;
            for(auto u : nums)st.insert(u);
            vector<int> nums1;
            for(auto u : st){
                nums1.push_back(u);
            }
            sort(nums1.begin(), nums1.end());
            for(int i = 0; i < nums1.size(); i++){
                nums[i] = nums1[i];
            }
            return (int)st.size();
        }
    };

