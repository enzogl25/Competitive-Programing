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
    double n; cin >> n;
    double cont = 0;
    double original_n = n;
    while(n--){
        int x; cin >> x;
        cont += x;
    }
    double resp = cont / original_n; 
    printf("%.12lf\n", resp);
    return 0;
}