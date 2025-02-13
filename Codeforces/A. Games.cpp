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
    vector<int> home(n), away(n);
    for(int i = 0; i < n; i++)cin >> home[i] >> away[i];
    int cont = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(home[i] == away[j] and i != j)cont++;
        }
    }
    cout << cont << endl;
    return 0;
}