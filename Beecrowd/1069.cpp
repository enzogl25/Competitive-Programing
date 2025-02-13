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
    while(n--){
        stack<char> pilha;
        int diamantes = 0;
        string s; cin >> s;
        for(auto c : s){
            if(c == '<')pilha.push(c);
            else if(c == '>' and !pilha.empty()){
                diamantes++;
                pilha.pop();
            }
        }

        cout << diamantes << endl;
    }
    return 0;
}