#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> LPS(const string &pattern) {
        int m = pattern.size();
        vector<int> lps(m, 0);
        int len = 0;
        int i = 1;
        while (i < m) {
            if (pattern[i] == pattern[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }
    
    vector<int> KMP(const string &text, const string &pattern) {
        int n = text.size();
        int m = pattern.size();
        vector<int> lps = LPS(pattern);
        vector<int> occurrences;
        int i = 0, j = 0;
        while (i < n) {
            if (text[i] == pattern[j]) {
                i++; 
                j++;
            }
            if (j == m) {
                occurrences.push_back(i - j); 
                j = lps[j - 1];  
            } else if (i < n && text[i] != pattern[j]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return occurrences;
    }
        int strStr(string haystack, string needle) {
            vector<int> kmp = KMP(haystack, needle);
            if(kmp.size() == 0)return -1;
            else return kmp[0];
        }
    };

    int main(){
        Solution sol;
        cout << sol.strStr("leetcode", "leeto");
    }