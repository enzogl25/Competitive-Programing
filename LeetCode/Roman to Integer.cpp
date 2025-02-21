#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int romanToInt(string s) {
            int val = 0;
            unordered_map<char, int> mp = {
                {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                {'C', 100}, {'D', 500}, {'M', 1000}
            };
            for(int i = 0; i < (int)s.size(); i++){
                if(i + 1 <(int)s.size() and mp[s[i]] < mp[s[i+1]]){
                    val += mp[s[i+1]] - mp[s[i]];
                    i++;
                }
                else{
                    val += mp[s[i]];
                }
            }
            return val;
        }
    };

    int main(){
        Solution sol;

        cout << sol.romanToInt("MCMXCIV") << endl;
    }