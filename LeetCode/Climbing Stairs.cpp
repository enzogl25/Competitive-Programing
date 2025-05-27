#include <bits/stdc++.h>

using namespace std;

class Solution {
    unordered_map<int,int> mp;
    
    void climb(){
        mp[0] = 0;
        mp[1] = 1;
        mp[2] = 2;
        for(int i = 3; i <= 45; i++){
            mp[i] = mp[i-2] + mp[i-1];
        }
    }
public:
    int climbStairs(int n) {
        return mp[n];
    }
};