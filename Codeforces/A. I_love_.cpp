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
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    int mini = v[0];
    int maxi = v[0];
    int cont = 0;
    for(int i = 1; i < n; i++){
        if(v[i] > maxi){
            cont++;
            maxi = v[i];
        }
        if(v[i] < mini){
            cont++;
            mini = v[i];
        }
    }
    cout << cont << endl;
    
    return 0;
}