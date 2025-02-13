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
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];

    bool turn = true;
    int sereja = 0, dima = 0;
    int l = 0, r = n-1;
    while(l <= r){
        if(v[l] > v[r]){
            if(turn == true)sereja += v[l];
            else dima += v[l];
            l++;
        }
        else{
            if(turn == true)sereja += v[r];
            else dima += v[r];
            r--;
        }
        turn = !turn;
    }
    
    
    cout << sereja << " " << dima << endl;
       
    return 0;
}