#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        char findTheDifference(string s, string t) {
            unordered_map<char,int> mp;
            for(auto c : s)mp[c]++;
            char r;
            for(auto c : t){
                if(mp[c] == 0){
                    r = c;
                    break;
                }
            }
            return r;
        }
    };