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
        vector<string> v;
        getline(cin,s);
        int pos = 0;
        string aux = "";
        for(int i = 0; i < s.size(); i++){
            if (isalnum(s[i])){
                aux += s[i];
            }
            if(isspace(s[i])){
               if(!aux.empty()){
                v.pb(aux);
                aux = "";
               }
            }
        }
        if(!aux.empty()){
            v.pb(aux);
        }
        stable_sort(v.begin(), v.end(), [](const string &a, const string &b) {
            return a.size() > b.size();
        });

        for(int i = 0; i < v.size(); i++){
            cout << v[i];
            if(i != v.size() - 1)cout << " ";   
        }
        cout << endl;
        
    }   
    return 0;
}