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
    int in = 0, out = 0;
    while(n--){
        int x; cin >> x;
        if(x >= 10 and x <= 20)in++;
        else out++;
    }  
    cout << in << " in" << endl;
    cout << out << " out" << endl; 
    return 0;
}