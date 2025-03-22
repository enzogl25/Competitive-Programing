#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using ll = long long;

int main() {
    _
    int n;
    bool first = true; 
    while (cin >> n && n != 0) {
        vector<string> v(n);
        int tam = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            tam = max(tam, (int)v[i].size());
        }

        if (!first) cout << endl; 
        first = false;

        for (int i = 0; i < n; i++) {
            cout << string(tam - v[i].size(), ' ') << v[i] << endl;
        }
    }
    return 0;
}
