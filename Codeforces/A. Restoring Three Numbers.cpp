#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int main() {
    _
    vector<int> nums(4);
    for(int i = 0; i < 4; i++){
        cin >> nums[i];
    }  
    sort(nums.begin(), nums.end());
    vector<int> resp;
    for(int i = 0; i < 3; i++){
        resp.pb(nums[3] - nums[i]);
    } 
    for(auto u : resp)cout << u << " ";
    return 0;
}