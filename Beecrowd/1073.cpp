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
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            ll resp = i * i;
            cout << i << "^" << 2 << " = " << resp << endl;
        }
    }   
    return 0;
}