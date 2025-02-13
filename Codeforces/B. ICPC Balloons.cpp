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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        unordered_set<char> st;
        int cont = 0;
        for(int i = 0; i < n; i++){
            if(!st.count(s[i])){
                cont += 2;
            }
            else{
                cont++;
            }
            st.insert(s[i]);
        }
        cout << cont << endl;
    }   
    return 0;
}