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
        int cont = 0;
        while(n != 0){
            cont++;
            n = n/2; 
        }
        cout << (1<<(cont-1)) - 1 << endl;
    }
   
    return 0;
}