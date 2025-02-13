#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;
 
int binToInt(const string &s){
    int val = 0;
    for(char c : s)val = (val << 1) + (c-'0');
 
    return val;
}
 
int modBinString(const string &M, int n){
    int resto = 0;
    for(char c : M){
        resto = (resto << 1) + (c-'0');
        resto %= n;
    }
    return resto;
}
 
int main() {
    _
    string m, n; cin >> m >> n;
    
    vector<pair<bool,int>> corrompidos;
    for(int i = 0; i < (int)m.size(); i++){
        if(m[i] == '*'){
            corrompidos.push_back({false, i});
        }
    }
 
    for(int i = 0; i < (int)n.size(); i++){
        if(n[i] == '*'){
            corrompidos.push_back({true, i});
        }
    }
 
    int k = (int)corrompidos.size();
 
    for(int mask = 0; mask < (1 << k); mask++){
        string M = m;
        string N = n;
 
        for(int bit = 0; bit < k; bit++){
            char chosen = ((mask >> bit) & 1) ? '1' : '0';
 
            auto &p = corrompidos[bit];
            if(!p.f)M[p.s] = chosen;
            else N[p.s] = chosen;
        }
        int valn = binToInt(N);
        if(valn == 0)continue;
 
        int r = modBinString(M, valn);
        if(r==0){
            cout << M << endl;
            return 0;
        }
    }
 
}