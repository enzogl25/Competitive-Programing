#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
int n; cin >> n;
 
if(n == 1)cout << "1" << endl;
else if(n == 2)cout << "2" << endl;
 
else{
    int a = 2;
    int b = 3;
    int temp;
    for(int i = 3; i <= n; i++){
        temp = b;
        b = b + a;
        a = temp;
    }
    cout << a << endl;
}
 
 
}