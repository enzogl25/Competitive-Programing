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
    int n;
    int idades = 0;
    int cont = 0;
    while(cin >> n){
        if(n < 0)break;

        idades += n;
        cont++;
    }   
    double mean = (double)idades/cont;
    cout << fixed << setprecision(2) << mean << endl;
    return 0;
}