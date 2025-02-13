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
    for(int i = 0; i < n; i++){
        int n1, d1, n2, d2;
        char s1, sm, s2;
        cin >> n1 >> s1 >> d1 >> sm >> n2 >> s2 >> d2;
        int nf, df;
        if(sm == '+'){
            df = d1 * d2;
            nf = (n1 * d2) + (n2 * d1);
        }
        else if(sm == '-'){
            df = d1 * d2;
            nf = (n1 * d2) - (n2 * d1);
        }
        else if (sm == '*'){
            df = d1 * d2;
            nf = n1 * n2;
        }
         else if (sm == '/'){
            df = d1 * n2;
            nf = n1 * d2;
        }
        if(df < 0){
            nf = nf * -1;
            df = df * -1;
        }
        cout << nf << "/" << df; 
        cout << " = ";
        int v = __gcd(nf, df);
        nf = nf/v;
        df = df/v;
         if(df < 0){
            nf = nf * -1;
            df = df * -1;
        }
        cout << nf << "/" << df << endl; 
    }   
    return 0;
}