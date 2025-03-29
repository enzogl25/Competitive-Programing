#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> triangle(numRows);
            triangle[0].push_back(1);
            
            for(int i = 1; i < numRows; i++){
                for(int j = 0; j < i + 1; j++){
                    if(j == 0 or j == i)triangle[i].push_back(1);
                    else{
                        int val = triangle[i-1][j] + triangle[i-1][j-1];
                        triangle[i].push_back(val);
                    }
                }
            }
            return triangle;
        }
    };