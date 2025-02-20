#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            string s = to_string(x);
            for(int i = 0; i < (int)s.size()/2; i++){
                if (s[i] != s[s.size()-i-1])return false;
            }
            return true;
        }    
    };

    int main(){
        Solution sol;

        cout << sol.isPalindrome(121) << endl;
    }