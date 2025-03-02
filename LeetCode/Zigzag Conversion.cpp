#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        string convert(string s, int numRows) {
            int n = s.size();
            if(n == 1 || numRows == 1)return s;
            vector<string> rows(numRows);
           
            int curRow = 0, direction = 1;
            
            for(char c : s){
                rows[curRow].push_back(c);
               if(curRow == numRows - 1){
                    direction = -1;
               }
               else if(curRow == 0){
                    direction = 1;
               }
               curRow += direction;
            }

            string resp = "";
            for(auto &linha : rows)resp += linha;

            return resp;
        }
    };

    int main(){
        Solution sol;
        cout << sol.convert("AB", 1);
    }