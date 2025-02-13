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
    int resp = 0;
    for(int i = 0; i < 5; i++){
        int r; cin >> r;
        if(r == n)resp++;
    }   
    cout << resp << endl;
    return 0;
}