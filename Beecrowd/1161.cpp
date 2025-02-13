#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

vector<ll> fat(20);

void getfat(){
    fat[0] = 1;
    fat[1] = 1;
    for(int i = 2; i <= 20; i++){
        fat[i] = fat[i-1] * i;
    }
}

int main() {
    _
    int x, y;
    getfat();
    while(cin >> x >> y){
        ll resp = fat[x] + fat[y];
        cout << resp << endl;
    }   
    return 0;
}