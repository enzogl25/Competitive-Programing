#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define pb push_back
#define ppb pop_back
using ll = long long;

int main() {
    _
    int n, t; cin >> n >> t;
    string s; cin >> s;
   
    for (int second = 0; second < t; second++) {
        for (int i = 0; i < n - 1; i++) {  
            if (s[i] == 'B' && s[i + 1] == 'G') {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    cout << s << endl;

    return 0;
}