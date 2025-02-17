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
    vector<int> v(n);
    int cont = 0;
    unordered_map<int,int> mp;
    for(int i = 0; i < n; i++){
        int v; cin >> v;
        if(mp[v] == 0)cont++;
        else mp[v]--;

        mp[v-1]++;
    } 
    cout << cont << endl;
    return 0;
}