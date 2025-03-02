#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<string> v = {
        "",     
        "",    
        "abc",  
        "def",  
        "ghi",  
        "jkl",  
        "mno",  
        "pqrs", 
        "tuv",  
        "wxyz"  
        };

        void gerarCombinacoes(const string& s, int indice, string atual, vector<string>& resp) {
            if (indice == s.size()) {
                resp.push_back(atual);
                return;
            }
            string letras =  v[s[indice] - '0'];
            for (auto it : letras) {
                gerarCombinacoes(s, indice + 1, atual + it, resp);
            }
        }

        vector<string> letterCombinations(string digits) {
            vector<string> resp;
            gerarCombinacoes(digits,0,"",resp);
            sort(resp.begin(), resp.end());
            return resp;
        }
    };