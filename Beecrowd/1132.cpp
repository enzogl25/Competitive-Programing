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
    ll resp = 0;
    int menor = min(x,y);
    int maior = max(x,y);
    for(int i = menor; i <= maior; i++){
        if(i % 13 != 0)resp += i;
    }
    cout << resp << endl;
    return 0;
}