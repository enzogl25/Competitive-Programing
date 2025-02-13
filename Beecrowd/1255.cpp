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
    cin.ignore(); 

    while(n--) {
        string s;
        getline(cin, s);

        unordered_map<char, int> freq;
        int maxFreq = 0;

        for (char &c : s) {
            if (isalpha(c)) {
                c = tolower(c);
                freq[c]++;
                maxFreq = max(maxFreq, freq[c]);
            }
        }

        vector<char> resultado;
        for (auto u : freq) {
            if (u.second == maxFreq) {
                resultado.pb(u.first);
            }
        }

        sort(resultado.begin(), resultado.end());

        for (char ch : resultado) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
