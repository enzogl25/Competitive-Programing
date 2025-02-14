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
        string s1;
        getline(cin, s1);
        string s2 = s1.substr(0, s1.size()/2);
        string s3 = s1.substr(s1.size()/2, s1.size());
        reverse(s2.begin(), s2.end());
        reverse(s3.begin(), s3.end());
        string resp = s2 + s3;
        cout << resp << endl;
    }  
    return 0;
}