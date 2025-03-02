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
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        for(int i = 1; ;i++){
            if (i % 3 == 0 || i % 10 == 3)
				continue;
			if (--k == 0)
			{
				cout << i << endl;
				break;
			}
        }
    }   
    return 0;
}