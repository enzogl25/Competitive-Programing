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
    int n, t; cin >> n >> t;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    for(int i = 0; i < n; i++){
        v[i] += t;
    }   
    sort(v.begin(), v.end());
    int participants = 0;
    for(int i = 0; i < n; i++){
        if(v[i] <= 5)participants++;
    }
    cout << participants/3 << endl;
    return 0;
}