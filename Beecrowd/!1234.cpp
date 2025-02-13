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
    string s;
    bool upper = true;
    while(getline(cin, s)){
        for(int i = 0; i < s.size(); i++){
            if(islower(s[i]) or isupper(s[i])){
                if(upper){
                    s[i] = toupper(s[i]);
                }
                else{
                    s[i] = tolower(s[i]);  
                }

                upper = !upper;
            }
        }

        cout << s << endl;
    }   
    return 0;
}