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
    int x,y;
    while(cin >> x >> y){
        if(x==y)break;
        if(x > y)cout << "Decrescente" << endl;
        if(x < y)cout << "Crescente" << endl;
    }
    return 0;
}