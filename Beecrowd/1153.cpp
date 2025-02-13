#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

vector<int> fat(14);

void calcularfat(){
    fat[0] = 1;
    fat[1] = 1;
    for(int i = 2; i < 13; i++){
        fat[i] = i * fat[i-1];
    }

}


int main() {
    _
    calcularfat();
    int n; cin >> n;
    cout << fat[n] << endl;
    return 0;
}