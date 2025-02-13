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
    while (true) {
        int n;
        string s;
        cin >> n >> s;

        if (n == 0 && s == "0") break;

        char remove_char = '0' + n;  
        string resp = "";

       
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != remove_char) {
                if (resp.empty() || resp.back() != s[i]) {
                    resp += s[i];
                }
            }
        }

        cout << (resp.empty() ? "0" : resp) << endl;
    }

    return 0;
}
