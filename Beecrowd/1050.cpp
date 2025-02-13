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
    map<int,string> mp;
    mp[61] = "Brasilia";
    mp[71] = "Salvador";
    mp[11] = "Sao Paulo";
    mp[21] = "Rio de Janeiro";
    mp[32] = "Juiz de Fora";
    mp[19] = "Campinas";
    mp[27] = "Vitoria";
    mp[31] = "Belo Horizonte";
    int n; cin >> n;
    if(mp[n] == "")cout << "DDD nao cadastrado" << endl;
    else cout << mp[n] << endl;
}