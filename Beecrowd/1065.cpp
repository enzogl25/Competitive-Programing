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
    int pares = 0;
    for(int i = 0; i < 5; i++){
        int x; cin >> x;
        if(x % 2 == 0)pares++;
    }
    cout << pares << " valores pares" << endl;   
    return 0;
}