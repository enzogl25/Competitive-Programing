#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
bool hasSameDigits(string s) {

    while (s.size() != 2) {
        string s1;
        for (int i = 1; i < (int)s.size(); i++) {
            int r = ((s[i] - '0') + (s[i-1] - '0')) % 10;
            s1.push_back(char(r + '0'));
        }
        s = s1;
    }
    
    return (s[0] == s[1]);
}
};

int main(){
    Solution sol;
    cout << sol.hasSameDigits("");
}