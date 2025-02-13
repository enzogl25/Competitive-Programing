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
    int cont = 1;
    int x; cin >> x;
    int atu = x;
    for(int i = 1; i < n; i++){
        cin >> x;
        if(x != atu){
            atu = x;
            cont++;
        }
    }   
    cout << cont << endl;
    return 0;
}