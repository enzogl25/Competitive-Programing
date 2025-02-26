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
    while(n--){
        string s;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(islower(s[i]) || isupper(s[i]))s[i] += 3;
        }
        reverse(s.begin(), s.end());
        for(int i = s.size()/2; i < s.size(); i++)s[i] -= 1;
        cout << s << endl;
    }

    return 0;
}