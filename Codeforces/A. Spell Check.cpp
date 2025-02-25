#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
//#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int main() {
    _
    int t; cin >> t;
    string comp = "Timur";
    sort(comp.begin(), comp.end());
    while(t--){
        int r; cin >> r;
        string n; cin >> n;
        if(r != 5)cout << "NO" << endl;
        else{
            sort(n.begin(), n.end());
            if(comp == n)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }   
    return 0;
}