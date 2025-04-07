#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
using ll = long long;

int main() {
    _
    int n, m; cin >> n >> m;

    queue<pair<int, int>> q;
    vector<bool> visited(2 * max(n, m) + 5, false);

    q.push({n, 0});
    visited[n] = true;

    while (!q.empty()) {
        pair<int,int> current = q.front();
        int cur = current.f;
        int steps = current.s;
        q.pop();

        if (cur == m) {
            cout << steps << endl;
            break;
        }

        if (cur * 2 <= 2 * m && !visited[cur * 2]) {
            q.push({cur * 2, steps + 1});
            visited[cur * 2] = true;
        }

        
        if (cur - 1 > 0 && !visited[cur - 1]) {
            q.push({cur - 1, steps + 1});
            visited[cur - 1] = true;
        }
    }

    return 0;
}
