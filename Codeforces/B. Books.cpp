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
    int n, t; cin >> n >> t;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++)  cin >> v[i];
    if(n == 1){
        if(v[0] <= t)cout << 1 << endl;
        else cout << 0 << endl;
        return 0;
    }
    long long sum = 0;  
    int ans = 0;         
    int l = 0;           

    for(int r = 0; r < n; r++){
        sum += v[r];
        
        while(sum > t && l <= r) {
            sum -= v[l];
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
}