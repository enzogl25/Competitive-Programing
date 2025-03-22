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
    while(cin >> n){
        if(n == 0)break;
        int tam = -1;
        vector<string> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            int size = v[i].size();
            tam = max(tam, size);
        }
        for(int i = 0; i < n; i++){
            int size = v[i].size();
            string fix(tam-size, ' ');
            if(tam - size > 0){
                v[i] = fix + v[i];
            }
            cout << v[i] << endl;
        }
        cout << endl; 
    }   
    return 0;
}