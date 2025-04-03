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
    int n;
    while(cin >> n){
        if(n == 0)break;
        for(int i = 1; i <= n; i++){
            i == n ? cout << i << endl : cout << i << " ";
        }
    }   
    return 0;
}