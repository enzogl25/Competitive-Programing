#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_set<char> st;
            int resp = 0;
            int left = 0;
            for(int right = 0; right < (int)s.size();right++){
                while(st.find(s[right]) != st.end()){
                    st.erase(s[left]);
                    left++;
                }
                st.insert(s[right]);
                int x = st.size();
                resp = max(resp, x);
            }
            return resp;
        }
    };

    int main(){
        Solution sol;
        cout << sol.lengthOfLongestSubstring("aaaaabbbcdef") << endl;
    }