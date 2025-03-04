#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool checkPowersOfThree(int n) {
            while(n > 0){
                if(n % 3 == 2)return false;
                n = n / 3;
            }
            return true;
        }
    };

int main(){
    Solution sol;
    cout << sol.checkPowersOfThree(21) << endl;
}