#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    _
    int n; 
    cin >> n;

    unordered_set<int> levels; 

    int p; 
    cin >> p; 
    for (int i = 0; i < p; ++i) {
        int x; 
        cin >> x;
        levels.insert(x);
    }

    int q; 
    cin >> q; 
    for (int i = 0; i < q; ++i) {
        int y; 
        cin >> y;
        levels.insert(y);
    }

    if (levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
