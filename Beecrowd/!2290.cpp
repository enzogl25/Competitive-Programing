#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using ll = long long;

int main() {
    _
    ll n;
    cin >> n;
    
    while (n != 0) {
        unordered_set<ll> st;

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (st.count(x)) st.erase(x);
            else st.insert(x);
        }

        if (st.size() < 2) {  
        } else {
            vector<ll> resp(st.begin(), st.end());  
            cout << min(resp[0], resp[1]) << " " << max(resp[0], resp[1]) << endl;
        }

        cin >> n;
    }

    return 0;
}
