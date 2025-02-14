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
        string s1, s2; cin >> s1 >> s2;
        char a = s1[0], b = s2[0];
        s1[0] = b;
        s2[0] = a;
        cout << s1 << " " << s2 << endl;
    }   
    return 0;
}