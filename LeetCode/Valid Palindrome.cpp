#include <bits/stdc++.h>
using namespace std;

class Solution {
 
    public:
        bool isPalindrome(string s) {
            string s_new = "";
          for(char c : s){
            if(isalnum(c))s_new += tolower(c);
          }
          int l = 0, r = (int)s_new.size() - 1; 
          while(l < r){
            if(s_new[l] != s_new[r])return false;
            l++;
            r--;
          }
          return true;  
        }
    };
