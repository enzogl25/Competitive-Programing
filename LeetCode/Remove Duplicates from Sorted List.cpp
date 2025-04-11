#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            ListNode* dummy = new ListNode(-1);
            ListNode* current = dummy;
            unordered_set<int> st;

            while(head != nullptr){
                if(st.count(head->val) == 0){
                    current->next = new ListNode(head->val);
                    st.insert(head->val);
                    current->next = new ListNode(head->val);
                    current = current->next;
                }
                head = head -> next;
            }

            return dummy -> next;
        }
        
    };