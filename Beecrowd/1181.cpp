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
    int l; cin >> l;
    char t; cin >> t;
    double matrix[12][12];
    double sum = 0;
    for(int i = 0; i < 12; i++){
        for(int j  = 0; j < 12; j++){
            cin >> matrix[i][j];
            if(i == l)sum += matrix[i][j];
        }
    }
    double mean = sum / 12.0;

    t == 'S' ? cout << fixed << setprecision(1) << sum << endl : cout << fixed << setprecision(1) << mean << endl;
    return 0;
} 