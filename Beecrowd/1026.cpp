#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    _
    unsigned int x, y; 
    while (cin >> x >> y) { 
        unsigned int resp = x ^ y; 
        cout << resp << endl; 
    }
    return 0;
}
