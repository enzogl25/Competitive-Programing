#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
            set<long long> st;
            int n = nums.size();
            for(int i = 0; i < n; i++){
                auto it = st.lower_bound((long long)nums[i] - valueDiff);

                if(it != st.end() and *it <= (long long) nums[i] + valueDiff)return true;

                st.insert(nums[i]);

                if((int)st.size() > indexDiff)st.erase(nums[i-indexDiff]);

            }

            return false;
        }
    };


int main(){
    vector<int> v = {1,2,3,1};
    Solution sol;
    cout << sol.containsNearbyAlmostDuplicate(v, 3, 0);
}