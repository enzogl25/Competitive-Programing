#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    _
    int A, N; cin >> A >> N;
    int sum = 0;
    while(N <= 0){
        cin >> N;
    }
    for(int i = 0; i < N; i++){
        sum += A + i;
    }
    cout << sum << endl;
    return 0;
}