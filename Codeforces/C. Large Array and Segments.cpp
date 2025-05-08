#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

void solve(){
    ll n, k, x;
    vector<ll> v(n);
    ll sum = 0;
    vector<ll> prefix(n * k, 0);
    cin >> v[0];
    prefix[0] = v[0];
    sum += v[0];
    for(ll i = 1; i < n; i++){
        cin >> v[i];
        prefix[i] = v[i] + prefix[i-1]; 
        sum += v[i];
    }
    if(sum * k < x){
        cout << 0 << endl;
        return;
    }
    for(ll i = n; i < n * k; i++){
        prefix[i] += prefix[i-1] + v[(i/n) - 1];
    }
    ll l = 0, r = n * k - 1;
    ll count = 1;
    while(l < n * k){

    }
}

int main() {
    _
    int t; cin >> t;
    while(t--)solve();
    return 0;
}