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
    int n; cin >> n;
    unordered_map<int,string> mp;
    string m = "I hate";
    string m1 = "I love";
    string resp = "";
    for(int i = 0; i < n; i++){
        if(i % 2 == 0)resp += m;
        else resp += m1;
        if(i != n-1)resp += " that ";
        else resp += " it";
    }
    cout << resp << endl;
    return 0;
}