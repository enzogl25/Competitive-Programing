#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)return 1.0;

        long long exp = n;
        if(exp < 0){
            exp = -exp;
            x = 1.0/x;
        }

        double result = 1.0;

        while(exp > 0){
            if(exp & 1){
                result *= x;
            }
            x *= x;
            exp >>= 1;
        }
        return result;
    }
};