#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string longestPalindrome(string s) {
            unordered_map<string, bool> mp;
            mp[""] = true;
            string resp = "";
            resp += s[0];
            for(int i = 0; i < (int)s.size(); i++){
                string r = "";
                r += s[i];
                mp[r] = true;
            }
            int l = 0;
            int r = 1;
            int target = 2;
            string mid = "";
            while(target <= (int)s.size()){
                if(l + target > (int)s.size()){
                    target++;
                    l = 0;
                    r = 1;
                }
                
                if(abs(r-l) + 1 == target){
    
                    string new_resp = s[l] + mid + s[r];
                    
                    if(s[l] == s[r] and mp[mid] == true){
                        mp[new_resp] = true;
                        if(new_resp.size() > resp.size())resp = new_resp;
                    }
                    else{
                        mp[new_resp] = false;
                    }
                    mid = "";
                    l++;
                    r = l + 1;
                }
                else {
                    mid += s[r];
                    r++;
                }
                
            }
            return resp;
        }
    };

