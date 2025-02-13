#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;
 
static int digiSum[1000001];
 
void buildDigiSum() {
    for (int i = 0; i <= 1000001; i++) {
        int x = i, s = 0;
        while (x > 0) {
            s += x % 10;
            x /= 10;
        }
        digiSum[i] = s;
    }
}
 
 
int main() {
    _
    ll n, k; cin >> n >> k;
    buildDigiSum();
    priority_queue<ll> mel;
    for(int i = 0; i < n; i++){
        int f; cin >> f;
        mel.push(f);
    }
    int resp = -1;
    for(int i = 0; i < k; i++){
        ll f = mel.top();
        mel.pop();
        
        ll digitsum = digiSum[f];
 
        if (i == k - 1) {
            resp = digitsum;
            break;
        }
 
        f -= digitsum;
        mel.push(f);
    }
    cout << resp << endl;
    return 0;
}