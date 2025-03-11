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
    while(n--){
        int a,b,c;cin >> a >> b >> c;
        if(a < b and b < c)cout << "STAIR" << endl;
        else if(a < b and c < b)cout << "PEAK" << endl;
        else cout << "NONE" << endl;
    }   
    return 0;
}