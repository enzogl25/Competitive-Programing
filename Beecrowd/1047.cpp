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
    int hi, mi, hf, mf; 
    cin >> hi >> mi >> hf >> mf;

    int inicio = hi * 60 + mi;
    int fim = hf * 60 + mf;


    if (fim <= inicio) {
        fim += 24 * 60; 
    }

    int duracao = fim - inicio;
    int horas = duracao / 60;
    int minutos = duracao % 60;

    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}
