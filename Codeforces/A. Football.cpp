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
    string s1; cin >> s1;
    int seq = 1;
    char ant = s1[0];
    for(int i = 1; i < (int)s1.size(); i++){
        if(s1[i] == ant){
            seq++;
        }
        else seq = 1;
        if(seq >= 7){
            cout << "YES\n";
            return 0;
        }
        ant = s1[i];
    }   
    cout << "NO\n"; 
    return 0;
}