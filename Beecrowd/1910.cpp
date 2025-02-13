#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int main() {
    _
    while(true){
        int O, D, K;
        cin >> O >> D >> K;
        
        if(!cin || (O==0 && D==0 && K==0)) break;

        vector<bool> proibido(100001,false);
        for(int i=0; i<K; i++){
            int x; cin >> x;
            proibido[x] = true;
        }

        vector<int> dist(100001, -1);
        queue<int> q;

        dist[O] = 0;
        q.push(O);

        int resposta = -1;

        while(!q.empty()){
            int atual = q.front();
            q.pop();

            if(atual == D){
                resposta = dist[atual];
                break;
            }

            auto tenta = [&](int x){
                if(x >= 1 && x <= 100000 && !proibido[x] && dist[x] == -1){
                    dist[x] = dist[atual] + 1;
                    q.push(x);
                }
            };

            tenta(atual + 1);
           
            tenta(atual - 1);
            
            tenta(atual * 2);
           
            tenta(atual * 3);
            
            if(atual % 2 == 0){
                tenta(atual / 2);
            }
        }
        
        cout << resposta << endl;
        cout.flush();
    }

    return 0;
}
