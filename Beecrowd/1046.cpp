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
    int i, f; cin >> i >> f;
    int resp;
    if(i > f){
        resp = 24 - i + f;
    }
    else if(f > i){
        resp = f - i;
    }
    else{
        resp = 24;
    }
    cout << "O JOGO DUROU " << resp << " HORA(S)" << endl;
    return 0;
}