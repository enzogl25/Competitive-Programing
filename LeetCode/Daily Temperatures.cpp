#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        vector<int> dailyTemperatures(vector<int>& temperatures) {
            int n = (int)temperatures.size();
            vector<int> resp(n,0);
            stack<int> st;
            st.push(0);
            for(int i = 1; i < n; i++){
                while(!st.empty() and temperatures[i] > temperatures[st.top()]){
                    resp[st.top()] = i - st.top();
                    st.pop();
                }
                st.push(i);
            }
            return resp;
        }

        
    };

int main(){

    vector<int> v = {73,74,75,71,69,72,76,73};
    Solution sol;
    vector<int> resp = sol.dailyTemperatures(v);
    for(auto u : resp)cout << u << " ";
}