#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int size1 = num1.size();
        int size2 = num2.size();
        vector<int> result(size1 + size2, 0);

        for (int i = size1 - 1; i >= 0; i--) {
            for (int j = size2 - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j;
                int p2 = i + j + 1;
                int sum = mul + result[p2];

                result[p2] = sum % 10;
                result[p1] += sum / 10;
            }
        }

        
        string ans = "";
        for (int num : result) {
            if (!(ans.empty() && num == 0)) {
                ans += to_string(num);
            }
        }

        return ans.empty() ? "0" : ans;
    }
};
