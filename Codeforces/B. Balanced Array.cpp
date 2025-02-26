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
        n = n/2;
        if(n & 1){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for(int i = 1; i <= n; i++){
            cout << i * 2 << " ";
        }
        for(int i = 1; i < n; i++)cout << i * 2 - 1 << " ";

        cout << 3 * n - 1 << endl;
    } 
    return 0;
}