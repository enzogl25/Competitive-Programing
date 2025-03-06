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
        int x; cin >> x;
        if(x == 0){
            cout << "NULL" << endl;
            continue;
        }
        if(x & 1){
            if(x > 0)cout << "ODD POSITIVE" << endl;
            else cout << "ODD NEGATIVE" << endl;
        }
        else{
            if(x > 0)cout << "EVEN POSITIVE" << endl;
            else cout << "EVEN NEGATIVE" << endl;
        }
    }   
    return 0;
}