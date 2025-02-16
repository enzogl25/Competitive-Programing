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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        int cont = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            cont += v[i];
        }
        int big = 0;
        double mean = cont / n;
        for(int i = 0; i < n; i++){
            if(v[i] > mean)big++;
        }
        double r = (double)big/n;
        cout << fixed << setprecision(3) << r * 100;
        cout << "%" << endl;
    }
    return 0;
}