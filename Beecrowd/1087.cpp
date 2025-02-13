#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int N = 9;

int main() {
    _
    
    while(true){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == 0 and y1 == 0 and x2 == 0 and y2 == 0)break;
        if(x1 == x2 and y1 == y2){
            cout << 0 << endl;
            continue;
        }
        int v[9][9];
        memset(v, 0, sizeof(v));
        for(int i = 0; i < 9; i++)v[x1][i] = 1;
        for(int i = 0; i < 9; i++)v[i][y1] = 1;
        for (int i = 0; i < 9; i++) {
            if (x1 - i >= 0 && y1 + i < N) v[x1 - i][y1 + i] = 1; 
            if (x1 - i >= 0 && y1 - i >= 0) v[x1 - i][y1 - i] = 1; 
            if (x1 + i < N && y1 + i < N) v[x1 + i][y1 + i] = 1; 
            if (x1 + i < N && y1 - i >= 0) v[x1 + i][y1 - i] = 1; 
        }
        v[x1][y1] = 9;
        if(v[x2][y2] == 1)cout << 1 << endl;
        else if(v[x2][y2] == 0)cout << 2 << endl;
    }
    
    

    return 0;
}