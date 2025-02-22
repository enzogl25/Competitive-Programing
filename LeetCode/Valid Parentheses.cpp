#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            stack<char>  st;
            for(char c : s){
                if(c == '(' or c == '[' or c == '{'){
                    st.push(c);
                }
                else{
                    if(st.empty())return false;
                    char top = st.top();
                    if ((c == ')' && top != '(') || 
                    (c == ']' && top != '[') || 
                    (c == '}' && top != '{')) {
                    return false;
                    }
                    st.pop();
                }
            }
            
            return st.empty();
        }
       
};



int main(){
    Solution sol;
    cout << sol.isValid("]") << endl;
}