#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
    _
    string s;   
    while(cin >> s){
        if(s == "2002"){
            cout << "Acesso Permitido" << endl;
            break;
        }
        else{
            cout << "Senha Invalida" << endl;
        }
    }
    return 0;
}