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
    int police = 0, cont = 0;
    while(n--){
        int x; cin >> x;
        if(x < 0){
            if(police == 0)cont++;
            else police--;
        }
        else police += x;
    }
    cout << abs(cont) << endl;
    return 0;
}