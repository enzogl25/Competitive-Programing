#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if(strs.empty())return "";
            
            int mini = INT_MAX;
            for(int i = 0; i < strs.size(); i++){
                int size = strs[i].size();
                mini = min(size, mini);
            }

            string s = "";

            for(int j = 0; j < mini; j++){
                for(int i = 1; i < (int)strs.size(); i++){
                if(strs[i][j] != strs[i-1][j]){
                    return s;
                }
                }
                s += strs[0][j];
            }
            return s;
        }
    };

    int main(){
        Solution sol;
        vector<string> v = {"flower", "flow", "flight"};
        
        cout << sol.longestCommonPrefix(v) << endl;
    }