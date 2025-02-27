#include <bits/stdc++.h>
using namespace std;



class Solution {
    public:
        int lengthOfLastWord(string s) {
          int n = s.size();
          bool letter = false;
          int size = 0;
          for(int i = n-1; i >=0; i--){
            if(isspace(s[i]) and letter)break;
            if(isalpha(s[i])){
                size++;
                letter = true;
            }
          } 
          return size; 
        }
        
    };

    int main(){
        Solution sol;
        cout << sol.lengthOfLastWord("   fly me   to   the moon  ") << endl;

    }