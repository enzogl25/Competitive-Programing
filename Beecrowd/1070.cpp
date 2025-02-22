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
    if(n % 2 == 0)n++;
    cout << n << endl;
    for(int i = 1; i <= 5; i++){
        n += 2;
        cout << n << endl;
    }   
    return 0;
}