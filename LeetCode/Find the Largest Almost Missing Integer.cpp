#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        int largestInteger(vector<int>& nums, int k) {

            int n = nums.size();
            if(n == k){
                int maxi = -1;
                for(auto u : nums){
                    maxi = max(u, maxi);
                }
                return maxi;
            }
            if(n == 2 and k == 1){
                if(nums[0] == nums[n-1])return -1;
                else return max(nums[0], nums[n-1]);
            }
            if(k == 1){
                unordered_map<int,int> mpp;
                int maxi = -1;
                for(int i = 0; i < n; i++){
                    mpp[nums[i]]++;
                }
                for(auto u : mpp){
                    if(u.second == k)maxi = max(u.first, maxi);
                    
                }
                return maxi;
            }
            int resp = -1;
            unordered_map<int,int> mp;
            int l = 0, r = n-1, val = 1;
            while(l <= r){


                if(l == r){
                    mp[nums[l]] += val;
                }
                else{
                    mp[nums[r]] += val;
                    mp[nums[l]] += val;
                }
                l++;
                r--;
                val++;
            }
            for(auto u : mp){
                if(u.second == 1){
                    resp = max(resp, u.first);
                }
            }
            return resp;
        }       
    };