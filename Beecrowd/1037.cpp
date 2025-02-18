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
    double n; cin >> n;
    
    if(n <= 25 and n >= 0)cout << "Intervalo [0,25]\n";
    else if(n <= 50 and  n >= 0)cout << "Intervalo (25,50]\n";
    else if(n <= 75 and  n >= 0)cout << "Intervalo (50,75]\n";
    else if(n <= 100 and  n >= 0)cout << "Intervalo (75,100]\n";
    else cout << "Fora de intervalo\n";
    return 0;
}