#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int kicks(const string &m) {
    int chutes = 0;
    int scoreA = 0, scoreB = 0;
    int restantesA = 5, restantesB = 5;

    for (int i = 0; i < (int)m.size(); i++) {
        if (i % 2 == 0) { 
            if (m[i] == '1') scoreA++;
            restantesA--;
        } else { 
            if (m[i] == '1') scoreB++;
            restantesB--;
        }

        chutes++;

        int maxA = scoreA + restantesA;
        int maxB = scoreB + restantesB;

        if (scoreA > maxB || scoreB > maxA) {
            break;
        }
    }

    return chutes;
}


int main() {
    _
    int n; cin >>  n;

    while(n--){
        string s1; cin >> s1;
        
        vector<int> corrompidos;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] == '?')corrompidos.pb(i);
        }
        int chutes = 10;
        int k = (int)corrompidos.size();
        int total = (1<<k);

        for(int mask = 0; mask < total; mask++){
            string s2 = s1;
            for(int bit = 0; bit < k; bit++){
                char chosen = ((mask >> bit) & 1) ? '1' : '0';

                auto u = corrompidos[bit];
                s2[u] = chosen;
            }
            chutes = min(chutes, kicks(s2));
        }

        cout << chutes << endl;
    }   
    return 0;
}