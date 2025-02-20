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
    int t; 
    cin >> t; 
    while(t--) {
        int n, m;
        cin >> n >> m; 

        multiset<long long> A, B;
        long long sumA = 0, sumB = 0;

        for(int i = 0; i < n; i++){
            long long x; 
            cin >> x;
            A.insert(x);
            sumA += x;
        }

        for(int i = 0; i < m; i++){
            long long x; 
            cin >> x;
            B.insert(x);
            sumB += x;
        }

        if(sumA != sumB) {
            cout << "No\n";
            continue;
        }


        priority_queue<long long> pq;
        for(long long x : B) {
            pq.push(x);
        }

        bool possible = true;

   
        while(!pq.empty() && !A.empty()) {
            long long top = pq.top();
            pq.pop();

            auto it = A.find(top);
            if(it != A.end()) {
              
                A.erase(it);
            }
            else {
              
                if(top == 1) {
                    possible = false;
                    break;
                }

                long long x1 = top / 2;
                long long x2 = top - x1;

                pq.push(x1);
                pq.push(x2);
            }
        }

        if(!A.empty()) {
            possible = false;
        }

        cout << (possible ? "Yes\n" : "No\n");
    }

    return 0;
}
