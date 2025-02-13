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
    vector<int> v(n);
    vector<int> v1(n);
    cin >> v[0];
    int resp = 0;
    int maior = v[0];
    int menor = v[0];
    int indexb = 0;
    int indexm = 0;
    for(int i = 1; i < n; i++){
        cin >> v[i];
        if(v[i] > maior){
            indexb = i;
            maior = v[i];
        }
        if(v[i] <= menor){
            indexm = i;
            menor = v[i];
        }
    } 
    if(indexb > indexm){
        resp += indexb;
        resp += n - indexm - 2;
    }  
    else{
        resp += indexb;
        resp += n - indexm - 1;
    }
    cout << resp << endl;
    return 0;
}