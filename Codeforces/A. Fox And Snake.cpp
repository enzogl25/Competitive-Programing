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
    int n, m;
    cin >> n >> m;

    string s(m, '#');   
    string s1 = "#" + string(m - 1, '.');  
    string s2 = string(m - 1, '.') + "#"; 

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << s << endl;  
        } else {
            if ((i / 2) % 2 == 0) {
                cout << s2 << endl; 
            } else {
                cout << s1 << endl;
            }
        }
    }

    return 0;
}
