#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int timemax = 240;
vector<int> v(11);

bool solve(int n, int k) {
    int resp = v[n] + k;
    return resp <= timemax;
}

int main() {
    _
    int n, k;
    cin >> n >> k;
    v[0] = 0;
    v[1] = 5;
    int ant = 5;

    for (int i = 2; i <= 10; i++) {
        int x = ant + 5;
        ant = x;
        v[i] = x + v[i - 1];
    }

    int l = 0, r = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        
        if (solve(mid, k)) l = mid + 1; 
        else r = mid - 1;             
    }

    cout << r << endl; 
    return 0;
}
