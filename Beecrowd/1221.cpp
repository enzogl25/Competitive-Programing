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
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        bool val = false;
        for(int i = 2; i <= sqrt(x); i++){
            if(x % i == 0){
                cout << "Not Prime" << endl; 
                val = true;
                break;
            }
        }
        if(val == false)cout << "Prime" << endl;
        
    }   
    return 0;
}