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
    vector<int> v(n+1,0);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++){
        int p = v[i];
        int a = v[p];
        int t = v[a];
        if(t == i){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}