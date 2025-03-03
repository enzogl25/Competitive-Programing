#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int n = nums.size();
            unordered_map<int,int> mp;
            pair<int,int> majority = {-1,-1};
            for(int i = 0; i < n; i++){
                mp[nums[i]]++;
                if(mp[nums[i]] > majority.second){
                    majority.first = nums[i];
                    majority.second = mp[nums[i]];
                }
            }
            return majority.first;
        }
    };

int main(){
    Solution sol;
    vector<int> v = {2,2,1,1,1,2,2};
    cout << sol.majorityElement(v) << endl;
}