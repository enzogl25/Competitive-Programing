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
    while(n--){
        string s, s1; cin >> s >> s1;
        if(s1.size() > s.size()){
            cout << "nao encaixa" << endl;
            continue;
        }
        string c = s.substr(s.size() - s1.size(), s1.size());
        if(c == s1)cout << "encaixa" << endl;
        else cout << "nao encaixa" << endl;
    }   
    return 0;
}