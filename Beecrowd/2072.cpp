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
    int q; 
    cin >> q;  
    while (q--) {
        int n; 
        cin >> n; 
        
        vector<tuple<int, int, int>> v(n);
        for (int i = 0; i < n; i++) {
            int x, y, z;
            cin >> x >> y >> z;
            v[i] = make_tuple(x, y, z);
        }


        if (n <= 3) {
            cout << n << endl; 
            continue;
        }

        int resp = 0;

 
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (get<0>(v[i]) == get<0>(v[j]) && get<1>(v[i]) == get<1>(v[j]) && get<2>(v[i]) == get<2>(v[j])) continue;
                    if (get<0>(v[i]) == get<0>(v[k]) && get<1>(v[i]) == get<1>(v[k]) && get<2>(v[i]) == get<2>(v[k])) continue;
                    if (get<0>(v[j]) == get<0>(v[k]) && get<1>(v[j]) == get<1>(v[k]) && get<2>(v[j]) == get<2>(v[k])) continue;
                    ll a1 = get<0>(v[j]) - get<0>(v[i]);
                    ll b1 = get<1>(v[j]) - get<1>(v[i]);
                    ll c1 = get<2>(v[j]) - get<2>(v[i]);

                    ll a2 = get<0>(v[k]) - get<0>(v[i]);
                    ll b2 = get<1>(v[k]) - get<1>(v[i]);
                    ll c2 = get<2>(v[k]) - get<2>(v[i]);

                    ll nx = b1 * c2 - c1 * b2;
                    ll ny = c1 * a2 - a1 * c2;
                    ll nz = a1 * b2 - b1 * a2;

                    if (nx == 0 && ny == 0 && nz == 0) {
                        continue;
                    }

                    int maxPoints = 0;
                    for (int l = 0; l < n; l++) {
                        ll px = get<0>(v[l]) - get<0>(v[i]);
                        ll py = get<1>(v[l]) - get<1>(v[i]);
                        ll pz = get<2>(v[l]) - get<2>(v[i]);

                        ll dot = px * nx + py * ny + pz * nz;
                        if (dot == 0) {
                            maxPoints++;
                        }
                    }
                    resp = max(resp, maxPoints);
                }
            }
        }
        cout << resp << endl;
    }

    return 0;
}
