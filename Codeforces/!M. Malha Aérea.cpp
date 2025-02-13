#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;
const int N = 101;
typedef array<ll,2> arr;
vector<arr> g[N];
vector<ll> dis;


vector<vector<pair<int, int>>> adj;



int main() {
    _
    int n; cin >> n;   
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ll x; cin >> x;
            g[i].push_back({x,j});
        }
    }
    dis.resize(n, LONG_MAX);
    priority_queue<arr, vector<arr>, greater<arr>> pq;
    pq.push({0,0});
    dis[0] = 0;
    while(!pq.empty()){
        auto x = pq.top();
        pq.pop();
        if(x[0] > x[1])continue;
        for(auto child : g[x[1]]){
            if(dis[child[1]] > dis[x[1]] + child[0]) {
                dis[child[1]] = dis[x[1]] + child[0];
                pq.push({dis[child[1]], child[1]});
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<dis[i]<<" ";
    }
    return 0;
}