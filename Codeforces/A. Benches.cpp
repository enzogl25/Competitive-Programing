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
    int n; cin >> n;
    int m; cin >> m;
    vector<int> v(n);
    int ans = 0, ans1 = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        ans1 = max(ans1, v[i] + m);
    }
    for(int i = 0; i < m; i++){
        int pos = -1;
        for(int j = 0; j < n; j++){
            if(pos == -1 or v[j] < v[pos]){
                pos = j;
            }
        }
        v[pos]++;
    }
    for(int i = 0; i < n; i++)ans = max(ans, v[i]);


    cout << ans << " " << ans1 << endl;
  
}
