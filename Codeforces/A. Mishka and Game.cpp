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
    int m = 0, c = 0;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        if(x > y)m++;
        if(y > x)c++;
    }
    if(m > c)cout << "Mishka" << endl;
    if(c > m)cout << "Chris" << endl;
    if(c == m)cout << "Friendship is magic!^^" << endl;  
    return 0;
}