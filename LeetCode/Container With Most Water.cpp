#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxArea(vector<int>& height) {
            
            int l = 0;
            int r = height.size() - 1;
            int area = -1;
            while (l < r){
                int h = min(height[l], height[r]);
                int length = r - l;
                area = max(area, h * length);
                if(height[l] > height[r]) r--;
                else l++;
            }
            return area;
        }
    };

int main(){
    Solution sol;
    vector<int> v = {1,8,6,2,5,4,8,3,7};
    cout << sol.maxArea(v) << endl;
}