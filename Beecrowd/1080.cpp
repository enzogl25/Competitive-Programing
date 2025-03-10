#include <bits/stdc++.h>
using namespace std;

int main(){
    int main = -1;
    int pos = -1;
    for(int i = 0; i < 100; i++){
        int x; cin >> x;
        if(x > main){
            main = x;
            pos = i + 1;
        }
    }
    cout << main << endl;
    cout << pos << endl;
}