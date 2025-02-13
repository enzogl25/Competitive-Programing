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
    vector<int> par, impar;
    while(n--){
        int x; cin >> x;
        if(x % 2 == 0)par.push_back(x);
        else impar.push_back(x);
        
    }   
    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end());
    reverse(impar.begin(), impar.end());
    for(auto u : par)cout << u << endl;
    for(auto u : impar)cout << u << endl;
    return 0;
}