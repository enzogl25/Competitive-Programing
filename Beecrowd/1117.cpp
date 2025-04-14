#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
    _
    double mean = 0;
    double grade;
    int count = 0;
    while(cin >> grade){
        if(grade < 0 or grade > 10){
            cout << "nota invalida" << endl;
        }
        else{
            mean += grade;
            count++;
        }
        if(count == 2)break;
        
    }
    cout << fixed << setprecision(2);
    cout << "media = " << mean/2 << endl;
    return 0;
}