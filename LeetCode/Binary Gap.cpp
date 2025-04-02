#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int binaryGap(int n) {
        int lastPos = -1;
        int maxDist = 0;
        int currentIndex = 0;
    
        while (n > 0) {
            if ((n & 1) == 1) {
                if (lastPos >= 0) {
                    maxDist = max(maxDist, currentIndex - lastPos);
                }
                lastPos = currentIndex;
            }
            currentIndex++;
            n >>= 1;
        }
        return maxDist;
    }
    
};