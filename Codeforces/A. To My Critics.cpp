#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

bool isPossible(vector<int> &val, int size, int target){
    for(int mask = 1; mask < (1 << size); mask++){
        int soma = 0;
        if(__builtin_popcount(mask) == 2){
            for(int bit = 0; bit < size; bit++){
                if(mask & (1 << bit))soma += val[bit];
                }
            if(soma >= target)return true;
        }
    }
    return false;
}


int main() {
    _
    int t; cin >> t;
    while(t--){
        vector<int> v(3);
        for(int i = 0; i < 3; i++)cin >> v[i];
        if(isPossible(v, 3, 10) == true)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
   
    return 0;
}