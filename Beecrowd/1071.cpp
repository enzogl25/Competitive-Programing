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
    int x, y; cin >> x >> y;
    int mini = min(x,y);
    int maxi = max(x,y);
    int resp = 0;
    for(int i = mini + 1; i < maxi; i++){
        if(i & 1)resp += i;
    }   
    cout << resp << endl;
    return 0;
}