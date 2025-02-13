#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;


vector<pair<int,int>> moves = {{+2, +1}, {+2, -1}, {-2, +1}, {-2, -1},
                               {+1, +2}, {+1, -2}, {-1, +2}, {-1, -2}};

int main() {
    _
    string n, m;
    while(cin >> n >> m){
        pair<int, int> inicio, fim;
        inicio.f = n[0] - 'a' + 1; 
        inicio.s = n[1] - '0';    
        fim.f = m[0] - 'a' + 1;
        fim.s = m[1] - '0';

   
        vector<vector<int>> dist(9, vector<int>(9, -1));

        dist[inicio.f][inicio.s] = 0;
        queue<pair<int, int>> q;
        q.push({inicio.f, inicio.s});

        while (!q.empty()) {
            pair<int, int> atual = q.front();
            q.pop();

            if (atual.f == fim.f && atual.s == fim.s) {
                cout << "To get from " << n << " to " << m << " takes " << dist[atual.f][atual.s] << " knight moves." << endl;
                break;
            }

        
            for (auto move : moves) {
                int nx = atual.f + move.f; 
                int ny = atual.s + move.s; 

                if (nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8 && dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[atual.f][atual.s] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    return 0;
}
