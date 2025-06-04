#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums;
        int l = 0, r = 0;

        while (l < m || r < n) {
            if (l >= m) {
                nums.push_back(nums2[r++]);
            }
            else if (r >= n) {
                nums.push_back(nums1[l++]);
            }
            else if (nums1[l] <= nums2[r]) {
                nums.push_back(nums1[l++]);
            }
            else {
                nums.push_back(nums2[r++]);
            }
        }
        
        for (int i = 0; i < m + n; i++) {
            nums1[i] = nums[i];
        }
    }
};
