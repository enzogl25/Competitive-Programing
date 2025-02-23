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
    int k; cin >> k;
    vector<int> v(12);
    for(int i = 0; i < 12; i++)cin >> v[i];
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int months = 0;
    int water  = 0;
    for(int i = 0; i < 12; i++){
        if(water >= k){
            cout << months << endl;
            return 0;
        }
        water += v[i];
        months++;
     
    }
    if(water >= k){
        cout << months << endl;
        return 0;
    }
    cout << -1 <<endl;

    return 0;
}