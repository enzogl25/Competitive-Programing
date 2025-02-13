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
    cin >> n;

    cout << n << endl; 
    vector<int> v = {100,50,20,10,5,2,1};

    for(int i = 0; i < v.size(); i++){
        int r = n / v[i];
        cout << r << " nota(s) de R$ " << v[i] <<",00" << endl;
        n = n % v[i];  
    }
    
}
