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
    int n; cin >> n;
    if(n == 0)cout << "E" << endl;
    else if(n <= 35)cout << "D" << endl;
    else if(n <= 60)cout << "C" << endl;
    else if(n <= 85)cout << "B" << endl;
    else if (n <= 100)cout << "A" << endl;
    return 0;
}