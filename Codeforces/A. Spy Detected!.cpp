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
        vector<int> v(n);
        for(int i = 0; i < n; i++)cin >> v[i];
        vector<int> v1 = v;
        sort(v1.begin(), v1.end());
        for(int i = 0; i < n; i++){
            if(v[i] != v1[1]){
                cout << i + 1 << endl;
                break;
            }
        }

    }   
    return 0;
}