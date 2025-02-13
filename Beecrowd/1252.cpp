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
    int n, m;
    while(cin >> n >> m){
        vector<int> v(n);
        if(n == 0 and m == 0){
            cout << n << " " << m << endl;
            break;
        }
        for(int i = 0; i < n; i++)cin >> v[i];
        sort(v.begin(), v.end(),
        [m](int a, int b) {
            
            int am = a % m;
            int bm = b % m;

            if (am < bm) {
                return true;   
            } else if (am > bm) {
                return false;  
            } else {
               
                bool aEhImpar = (a % 2 != 0);
                bool bEhImpar = (b % 2 != 0);

               
                if (aEhImpar && !bEhImpar) {
                    return true;  
                }
                if (!aEhImpar && bEhImpar) {
                    return false;
                }

                if (aEhImpar && bEhImpar) {
                    return a > b;  
                    
                }
                if (!aEhImpar && !bEhImpar) {
                    return a < b;
                }

                return false;
            }
        }
    );
    cout << n << " " << m << endl;
    for(auto u : v)cout << u << endl;
    }
    return 0;
}