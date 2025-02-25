#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;


int bubble_sort(vector<int> &v) {
    int n = v.size(); 
    bool swapped;
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        swapped = false; 
        
        for (int j = 0; j < n - i - 1; j++) { 
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapped = true; 
                swaps++;
            }
        }
        
        if (!swapped) break; 
    }
    return swaps;
}

int main() {
    _
    int n; cin >> n;
    while(n--){
        int l; cin >> l;
        vector<int> v(l);
        for(int i = 0; i < l; i++)cin >> v[i];
        cout << "Optimal train swapping takes " << bubble_sort(v) << " swaps." << endl;
    }
    
    

    return 0;
}