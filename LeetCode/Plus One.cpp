#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int n = digits.size();
            for(int i = n-1; i >= 0; i--){
                if(digits[i] < 9){
                    digits[i]++;
                    return digits;
                }
                digits[i] = 0;
            }   
            digits.insert(digits.begin(),1);
            return digits;
        }
    };

int main(){
    Solution sol;
    vector<int> v = {1,2,3};
    vector<int> t = sol.plusOne(v);
    for(auto u : t)cout << u << " ";
}