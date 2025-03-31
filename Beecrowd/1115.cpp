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
    int x, y;
    while(cin >> x >> y){
        if(x == 0 or y == 0)break;

        if(x > 0 and y > 0)cout << "primeiro" << endl;
        if(x > 0 and y < 0)cout << "quarto" << endl;
        if(x < 0 and y < 0)cout << "terceiro" << endl;
        if(x < 0 and y > 0)cout << "segundo" << endl;
    }
    return 0;
}