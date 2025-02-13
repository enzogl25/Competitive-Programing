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
    unordered_map<char, int> mp;
    mp['1'] = 2;
    mp['2'] = 5;
    mp['3'] = 5;
    mp['4'] = 4;
    mp['5'] = 5;
    mp['6'] = 6;
    mp['7'] = 3;
    mp['8'] = 7;
    mp['9'] = 6;
    mp['0'] = 6;
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        int resp = 0;
        for(auto c : s){
            resp += mp[c];
        }
        cout << resp << " leds" << endl;
    }
    return 0;
}