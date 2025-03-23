#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        string addBinary(string a, string b) {
            string binary = "";
            int sizeA = a.size();
            int sizeB = b.size();
            int dif = abs(sizeA - sizeB);
            
            string s(dif, '0');
            if(sizeA > sizeB) b = string(dif, '0') + b;
            if(sizeB > sizeA) a = string(dif, '0') + a;
          
            int carry = 0;
            for(int i = (int)a.size() - 1; i >= 0; i--){
                int sum = (a[i] - '0') + (b[i] - '0') + carry;
                binary = char((sum % 2) + '0') + binary;
                carry = sum / 2;
            }
            if(carry)binary = '1' + binary;
            return binary;  
        }
    };

    int main(){
        Solution sol;
        cout << sol.addBinary("11", "1");
    }