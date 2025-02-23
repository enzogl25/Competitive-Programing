#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxDistance(int side, vector<vector<int>>& points, int k) {
            vector<pair<int,int>> v;
            
            for(int i = 0; i < points.size(); i++){
                int j = 0;
                int ant;
                for(int num : points[i]){
                    if(j == 1)v.push_back({ant, num});
                    j++;
                    ant = num;
                }
            }
            
            int size = v.size();
            int resp = INT_MAX;
            for(int mask = 1; mask < (1 << size); mask++){
                if(__builtin_popcount(mask) == 2){
                    int i = 0;
                    int x0, y0, x1, y1;
                    for(int bit = 0; bit < size; bit++){
                        if(mask & (1 << bit)){
                            if(i == 0){
                                x0 = v[bit].first;
                                y0 = v[bit].second;
                                i++;
                            }
                            else{
                                x1 = v[bit].first;
                                y1 = v[bit].second;
                            }
                        }
                    }
                    int manhatam = abs(x0 - x1) + abs(y0 - y1);
                    
                    resp = min(resp, manhatam);
                }
            } 
            return resp;  
        }
        
    };

    int main(){
        vector<vector<int>> v = {{0,0}, {1,2}, {2,0}, {2,2}, {2,1}};
        Solution sol;
        cout << sol.maxDistance(2, v, 4);
    }