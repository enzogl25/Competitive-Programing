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
    int n, m; cin >> n >> m;
    int maior = max(n,m);
    int menor = min(n,m);
    if(maior % menor == 0)cout << "Sao Multiplos" << endl;
    else cout << "Nao sao Multiplos" << endl;
    return 0;
}