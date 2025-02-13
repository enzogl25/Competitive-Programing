#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int cpar = 0, cimpar = 0, cpos = 0, cneg=0;

void number(int n){
    if(n % 2 == 0)cpar++;
    else cimpar++;
    if(n > 0)cpos++;
    if(n < 0)cneg++;
}

int main() {
    _
    for(int i = 0; i < 5; i++){
        int x; cin >> x;
        number(x);
    }
    cout << cpar << " " << "valor(es) par(es)" << endl;
    cout << cimpar << " " << "valor(es) impar(es)" << endl;
    cout << cpos << " " << "valor(es) positivo(s)" << endl;
    cout << cneg << " " << "valor(es) negativo(s)" << endl;
    return 0;
}