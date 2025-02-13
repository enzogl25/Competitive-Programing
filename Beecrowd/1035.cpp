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
    int a,b,c,d; cin >> a >> b >> c >> d;
    if(b > c and d > a and (c+d) > (a+b) and c > 0 and d > 0 and a % 2 == 0){
        cout << "Valores aceitos" << endl;
    }
    else{
        cout << "Valores nao aceitos" << endl;
    }
    return 0;
}