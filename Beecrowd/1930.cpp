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
    int n;
    int sum = 0;
    for(int i = 0; i < 4; i++){
        cin >> n;
        sum += n;
    }   
    cout << sum - 3 << endl;
    return 0;
}