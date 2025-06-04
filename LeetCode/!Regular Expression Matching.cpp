#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> v;
    set<char> sta, stp;
    void gerarcombinacoes(string s, string p, string t, int index){

        if(t.size() == p.size()){
            v.push_back(t);
            return;
        }

        
        sta.insert(p[index]);

        if(p[index] == '.'){
            for(char c : stp){
                gerarcombinacoes(s,p, t + c, index + 1);
            }
        }
        else if(p[index] == '*'){
            for(char c : sta){
                if(c == '.'){
                    for(char c : stp){
                        gerarcombinacoes(s,p, t + c, index + 1);
                    }   
                }
                else if (c != '*')gerarcombinacoes(s,p, t + c, index + 1);
            }
        }
        else{
            gerarcombinacoes(s,p, t + p[index], index + 1);
        }
    }

    bool isMatch(string s, string p) {
        if(s.size() > p.size())return false;
        for(char c : s)stp.insert(c);
        gerarcombinacoes(s,p,"",0);
        for(string s : v)cout << s << endl;
        return true;
    }
};

int main(){
    string s = "ab", p = ".*";
    Solution sol;
    cout << sol.isMatch(s,p);
}