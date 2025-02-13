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
        bool lt = false;
        string resp = "";
        for(int i = 0; i < s.size(); i++){
            if(islower(s[i]) and lt == false){
                resp += s[i];
                lt = true;
            }
            if(isspace(s[i])) lt = false;
        }
        cout << resp << endl;
    }
    return 0;
}