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
    bool ver = false;
    while(ver != true){
        n++;
        string s = to_string(n);
        unordered_set<char> st;
        for(int i = 0; i < s.size(); i++){
            st.insert(s[i]);
        }
        if(st.size() == s.size()){
            cout << n << endl;
            return 0;
        }
        

    }
    return 0;
}