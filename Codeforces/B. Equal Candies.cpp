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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v(n);
        ll candies = 1e7+1;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            candies = min(candies, v[i]);
        }
        ll resp = 0;
        for(int i = 0; i < n ; i++){
            resp += v[i] - candies;
        }
        cout << resp << endl;
    }   
    return 0;
}