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
    string n, m; cin >> n;
    cin >> m;
    string resp = "";
    for(int i = 0; i < n.size(); i++){
        if(n[i] == '1'){
            if(m[i] == '1')resp += '0';
            else resp += '1';
        }
        else{
            if(m[i] == '1')resp += '1';
            else resp += '0';
        }
    }   
    cout << resp << endl;
    return 0;
}