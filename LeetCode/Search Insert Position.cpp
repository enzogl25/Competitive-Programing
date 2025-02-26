#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int l = 0;
            int r = nums.size()-1;
            while(l <= r){
                int m = l + (r - l)/2;
                if(nums[m] == target)return m;
                else if(nums[m] < target)l = m + 1;
                else if(nums[m] > target)r = m - 1;
            }
            return l;
        }
    };

    int main(){
        vector<int> v = {1,3,5,6};
        Solution sol;
        cout << sol.searchInsert(v, 7) << endl;
    }