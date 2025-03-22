#include <bits/stdc++.h>
using namespace std;

class Solution {
    unordered_map<string, int> memo; 
    unordered_set<string> visiting;  

    bool ispossible(const string& t, vector<string>& recipes,
                    vector<vector<string>>& ingredients,
                    unordered_map<string, int>& supplied,
                    unordered_map<string, int>& reciped) {
        
        if (memo.count(t)) return memo[t] == 1;
        if (supplied.count(t)) {
            memo[t] = 1;
            return true;
        }

        if (!reciped.count(t)) {
            memo[t] = -1;
            return false;
        }

        if (visiting.count(t)) return false; 
        visiting.insert(t); 

        int idx = reciped[t];
        for (auto& ing : ingredients[idx]) {
            if (!ispossible(ing, recipes, ingredients, supplied, reciped)) {
                visiting.erase(t);
                memo[t] = -1;
                return false;
            }
        }

        visiting.erase(t);
        memo[t] = 1;
        return true;
    }

public:
    vector<string> findAllRecipes(vector<string>& recipes,
                                  vector<vector<string>>& ingredients,
                                  vector<string>& supplies) {

        unordered_map<string, int> supplied;
        unordered_map<string, int> reciped;
        vector<string> result;

        for (auto& s : supplies) supplied[s] = 1;
        for (int i = 0; i < recipes.size(); ++i) reciped[recipes[i]] = i;

        for (auto& r : recipes) {
            visiting.clear();
            if (ispossible(r, recipes, ingredients, supplied, reciped)) {
                result.push_back(r);
                supplied[r] = 1;
            }
        }

        return result;
    }
};
