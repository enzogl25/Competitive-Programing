#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
int n; cin >> n;
int mat[n][n];
int l = 0, c = 0;
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        int x; cin >> x;
        mat[i][j] = x;
    }
}   
 
        if(mat[0][0] < mat[0][1])c = 1;
            
         if(mat[0][0] < mat[1][0])l = 1;
    
 
    if(l == 1  && c == 1)cout << "0" << endl;
    else if(l == 1 && c == 0)cout << "1" << endl;
    else if(l == 0 && c == 0)cout << "2" << endl;
    else if(l == 0 && c == 1)cout << "3" << endl;
 
}