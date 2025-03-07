#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

        bool binarysearch(vector<int> &v, int target){
            int left = 0;
            int right = static_cast<int>(v.size()) - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
        
                if (v[mid] == target) {
                    return 1;
                } else if (v[mid] < target) {
                    left = mid + 1;
                } else {

                    right = mid - 1;
                }
            }
            return 0;
        }

        vector<int> searchRange(vector<int>& nums, int target) {
            vector<int> resp;
            if(binarysearch(nums, target)){
                auto lb = lower_bound(nums.begin(), nums.end(), target);
                auto ub = upper_bound(nums.begin(), nums.end(), target);
                resp.push_back(lb - nums.begin());
                resp.push_back(ub - nums.begin() - 1);
            }
            else{
                resp.push_back(-1);
                resp.push_back(-1);
            }
      
            return resp;
        }
    };

    int main(){
        Solution sol;
        vector<int> t = {1};
        int target = 1;
        vector<int> v = sol.searchRange(t, target);
        cout << v[0] << " " << v[1] << endl;
    }