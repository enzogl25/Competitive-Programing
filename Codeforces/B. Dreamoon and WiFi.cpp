#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int moviment(const string &m){
    int mov = 0;
    for(char c : m){
        if(c == '+')mov++;
        else mov--;
    }
    return mov;
}


int main() {
    _
    string s1; cin >> s1;
    string s2; cin >> s2; 
    vector<int> dif, eq;

    int mov = moviment(s1);
    
    vector<int> corrompidos;
    for(int i = 0; i < s2.size(); i++){
        if(s2[i] == '?')corrompidos.pb(i);
    }

    int k = (int)corrompidos.size();
    int valid = 0, total = (1 << k);
    for(int mask = 0; mask < (1 << k); mask++){
        string s3 = s2;
        for(int bit = 0; bit < k; bit++){
            char chosen = ((mask >> bit) & 1) ? '+' : '-';

            auto u = corrompidos[bit];
            s3[u] = chosen;
        }
        int x = moviment(s3);
        if(x == mov)valid++;
        
    }
   
    double resp = valid / (double)total;
    cout << fixed << setprecision(12) << resp << endl;
    return 0;
}