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
    string n; 
    getline(cin, n);
    
    unordered_set<char> st;
    for(int i = 0; i < n.size(); i++){
        if(n[i] != ' ' and n[i] != '{' and n[i] != '}' and n[i] != ',')st.insert(n[i]);
    }
    cout << st.size() << endl;
    return 0;
}