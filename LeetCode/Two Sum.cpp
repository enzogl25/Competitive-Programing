#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {

            vector<pair<int, int>> arr;
            arr.reserve(nums.size());

            for (int i = 0; i < (int)nums.size(); i++) {
                arr.push_back({nums[i], i});
            }
            sort(arr.begin(), arr.end(), [](auto &a, auto &b){
                return a.first < b.first;
            });
            
            int l = 0, r = nums.size() - 1;
            
            while (l < r) { 
                int sum = arr[l].first + arr[r].first;

                if (sum > target) {
                    r--;
                } else if (sum < target) {
                    l++;
                } else {
                    return {arr[l].second, arr[r].second}; 
                }
            }
            return {}; 
        }
    };

