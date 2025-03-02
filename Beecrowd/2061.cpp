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
    int n,m; cin >> n >> m;
    while(m--){
        string s; cin >> s;
        if(s == "fechou")n++;
        else n--;
    }   
    cout << n << endl;
    return 0;
}