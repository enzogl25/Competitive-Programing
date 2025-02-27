#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int maxReach = 0;
            for(int i = 0; i < (int)nums.size(); i++){
                if(i > maxReach)return false;
                maxReach = max(i + nums[i], maxReach);
                if(maxReach >= (int)nums.size() - 1)return true;
            }
            if(maxReach >= (int)nums.size()-1)return true;
            else return false;
        }
    };

    int main(){
        vector<int> v = {1,2};
        Solution sol;
        cout << sol.canJump(v);
    }