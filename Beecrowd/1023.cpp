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
    int n;
    int cidade = 1;
    cin >> n;
    while(n != 0){
        unordered_map<int,int> mp;
        vector<pair<int,int>> v; 
        int cX = 0, cY = 0;
        for(int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            mp[y/x] += x;
            cX += x;
            cY += y;
        }
        double consumo = (double)cY/cX;
        double cr = floor(consumo * 100)/100;
        for(auto u : mp){
            v.pb({u.f, u.s});
        }
        sort(v.begin(), v.end());
        cout << "Cidade# " << cidade << ":" << endl; 
        for(int i = 0; i < (int)v.size(); i++){
            cout << v[i].s << "-" << v[i].f;
            if(i != n - 1)cout << " "; 
        }
        cout << endl;
        cout << "Consumo medio: ";
        cout << fixed << setprecision(2) << cr;
        cout << " m3." << endl;
        cout << endl;
        cin >> n;
        cidade++;
        
    }
    
    return 0;
}