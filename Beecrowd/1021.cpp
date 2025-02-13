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
    double s; 
    cin >> s; 

    int n = (int) s; 

    int r = (int)round((s - n) * 100); 

    vector<int> notas = {100, 50, 20, 10, 5, 2};
    vector<int> moedas = {100, 50, 25, 10, 5, 1}; 
   
    cout << "NOTAS:" << endl;
    for(int valor : notas) {
        int qtd = n / valor;
        cout << qtd << " nota(s) de R$ " << valor << ".00" << endl;
        n %= valor;
    }

    cout << "MOEDAS:" << endl;
    
    cout << n << " moeda(s) de R$ 1.00" << endl;

    for(int i = 0; i < moedas.size(); i++){
        int qtd = r / moedas[i];
        
        if(moedas[i] == 50) 
            cout << qtd << " moeda(s) de R$ 0.50" << endl;
        else if(moedas[i] == 25) 
            cout << qtd << " moeda(s) de R$ 0.25" << endl;
        else if(moedas[i] == 10) 
            cout << qtd << " moeda(s) de R$ 0.10" << endl;
        else if(moedas[i] == 5) 
            cout << qtd << " moeda(s) de R$ 0.05" << endl;
        else if(moedas[i] == 1) 
            cout << qtd << " moeda(s) de R$ 0.01" << endl;

        r %= moedas[i];
    }
    return 0;
}
