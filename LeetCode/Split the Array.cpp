#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isPossibleToSplit(vector<int>& nums) {
            unordered_map<int,int> mp;
            for(auto u : nums)mp[u]++;
            for(auto u : mp){
                if(u.second > 2)return false;
            }
            return true;
        }
    };