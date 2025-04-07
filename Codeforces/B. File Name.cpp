#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using ll = long long;

int main() {
    _
    int n; cin >> n;   
    string s; cin >> s;
    int count = 0, resp = 0;

    for(char c : s){
        if(c == 'x')count++;
        else{
            if(count >= 3){
                resp += count - 2;
            }
            count = 0;
        }
    }
    if(count >= 3){
        resp += count - 2;
    }
    cout << resp << endl;
    return 0;
}