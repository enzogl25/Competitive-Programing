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
    double x, y; cin >> x >> y;
    if(x > 0){
        if(y > 0)cout << "Q1" << endl;
        else if(y < 0)cout << "Q4" << endl;
        else if (y == 0)cout << "Eixo X" << endl;
    }
    else if(x < 0){
        if(y > 0)cout << "Q2" << endl;
        else if(y < 0)cout << "Q3" << endl;
        else if (y == 0)cout << "Eixo X" << endl;
    } 
    else if(x == 0){
        if(y == 0)cout << "Origem" << endl;
        else cout << "Eixo Y" << endl;
    }
    return 0;
}