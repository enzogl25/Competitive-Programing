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
        int x; cin >> x;
        if(x >= 1900)cout << "Division 1" << endl;
        else if(x >= 1600)cout << "Division 2" << endl;
        else if(x >= 1400)cout << "Division 3" << endl;
        else cout << "Division 4" << endl;
    }  
    return 0;
}