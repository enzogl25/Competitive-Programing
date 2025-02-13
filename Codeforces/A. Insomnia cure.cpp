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
    int k, l, m, n, d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    unordered_set<int> st;
    for(int i = k; i <= d; i+=k)st.insert(i);
    for(int i = l; i <= d; i+=l)st.insert(i);
    for(int i = m; i <= d; i+=m)st.insert(i);
    for(int i = n; i <= d; i+=n)st.insert(i);
    cout << st.size() << endl;

    return 0;
}