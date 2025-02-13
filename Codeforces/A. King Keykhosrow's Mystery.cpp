#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;


int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b; 
}
int main() {
    _
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        cout << lcm(a,b) << endl;
    }   
    return 0;
}