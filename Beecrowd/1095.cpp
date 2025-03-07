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
    int i = 1, j = 60;
    cout << "I=" << i << " " << "J=" << j << endl;
    while(j != 0){
        i += 3;
        j -= 5;
        cout << "I=" << i << " " << "J=" << j << endl;
    }  
    return 0;
}