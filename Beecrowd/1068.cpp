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
    
    string s;
    while (getline(cin, s)) {
        stack<char> pilha;
        
        bool balanced = true;
        for (char c : s) {
            if (c == '(') {
                pilha.push(c);
            } else if (c == ')') {
                if (!pilha.empty()) {
                    pilha.pop();
                } else { 
                    balanced = false;
                    break; 
                }
            }
        }

        if (!pilha.empty() || !balanced) {
            cout << "incorrect" << endl;
        } else {
            cout << "correct" << endl;
        }
    }
    
    return 0;
}
