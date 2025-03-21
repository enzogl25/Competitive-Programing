#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
//#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int main() {
    _
    string s; cin >> s;
    int size = s.size();
    if(size == 1){
        cout << "0" << endl;
        return 0;
    }
    string ans = "";
    int l = 0;
    int r = 1;
    while(l < size){
        string aux = "";
        if(l < size)aux += s[l];
        if(r < size)aux += s[r];
        if(aux == "-."){
            ans += '1';
            l+=2;
            r+=2;
        }
        else if(aux == "--"){
            ans += '2';
            l += 2;
            r+=2;
        }
        else{
            ans += '0';
            l++;
            r++;
        }
    }
    cout << ans << endl;
    return 0;
}