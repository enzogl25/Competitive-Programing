#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto u : nums){
            if(mp[u] >= 1)return true;
            else mp[u]++;
        }
        return false;
    }
};