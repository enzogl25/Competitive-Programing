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
        int a,b,c; cin >> a >> b >> c;
        if(a + b == c)cout << "+" << endl;
        else cout << "-" << endl;
    }   
    return 0;
}