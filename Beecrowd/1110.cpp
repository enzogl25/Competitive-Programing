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
    while(n != 0){
        queue<int> q;
        vector<int> d;
        for(int i = 1; i <= n; i++)q.push(i);
        while(q.size() != 1){
            int x  = q.front();
            q.pop();
            d.push_back(x);
            x = q.front();
            q.pop();
            q.push(x);
        }
        cout << "Discarded cards: ";
        for(int i = 0; i < d.size(); i++){
            if(i != d.size() - 1)cout << d[i] << ", ";
            else cout << d[i] << endl;
        }
        cout << "Remaining card: ";
        cout << q.front() << endl;
        cin >> n;
    }
    return 0;
}