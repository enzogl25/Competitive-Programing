#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
int n; cin >> n;
int k; cin >> k;
int t = k/n;
if((t*n) + (n - 1) > k){
    cout << t-1 << endl;
}
else cout << t << endl;
 
}