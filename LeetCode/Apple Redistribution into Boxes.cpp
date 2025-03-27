#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
            int apples = 0;
            for(auto u : apple)apples += u;
            int n = (int)capacity.size();
            sort(capacity.begin(), capacity.end(), greater<>());
            int box = 0;
            for(int i = 0; i < n && apples > 0; i++){
                apples -= capacity[i];
                box++;
            }
            return box;
        }
    };

int main(){
    Solution sol;
    vector<int> v = {1,3,2};
    vector<int> v1 = {4,3,1,5,2};
    cout << sol.minimumBoxes(v,v1);
}