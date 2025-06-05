#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> parent;
    int find(int x){
        if(x != parent[x]) parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int x, int y){
        int px = find(x);
        int py = find(y);
        if(px == py)return;
        if(px < py) parent[py] = px;
        else parent[px] = py;
    }
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        parent.resize(26);
        iota(parent.begin(), parent.end(), 0);
        for(int i = 0; i < (int)s1.size(); i++){
            unite(s1[i] - 'a', s2[i] - 'a');
        }

        string resp = "";

        for(char c : baseStr){
            resp += (char)(find(c - 'a') + 'a');
        }

        return resp;
        
    }
};