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
        int a; cin >> a;
        int cont = 0;
        for(int i = 0; i < 3; i++){
            int x; cin >> x;
            if(x > a)cont++;
        }
        cout << cont << endl;
    }   
    return 0;
}