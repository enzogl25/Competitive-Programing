#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
    _
    int m, n;
    while (cin >> n >> m) {
        if (n <= 0 || m <= 0) break;

        if (m < n) swap(m, n);

        int sum = 0;
        for (int i = n; i <= m; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }

    return 0;
}
