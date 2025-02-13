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
    int ano = n / 365;
    cout << ano << " ano(s)" << endl;
    n = n % 365;
    int mes = n / 30;
    cout << mes << " mes(es)" << endl;
    n = n % 30;
    cout << n << " dia(s)" << endl;   
    return 0;
}