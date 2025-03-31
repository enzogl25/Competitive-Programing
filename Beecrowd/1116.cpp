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
        int a,b; cin >> a >> b;

        if(b == 0){
            cout << "divisao impossivel" << endl;
            continue; 
        }
        double division = (double) a/b;
        cout << fixed << setprecision(1) << division << endl;
    }   
    return 0;
}