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
    ListNode* reverseList(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        vector<int> v;
        while(head != nullptr){
            v.push_back(head->val);
            head = head->next;
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i < (int)v.size(); i++){
            current->next = new ListNode(v[i]);
            current = current->next;
        }
        return dummy->next;
    }
};

class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = nullptr;
            ListNode* current = head;
    
            while (current != nullptr) {
                ListNode* nextTemp = current->next; 
                current->next = prev;               
                prev = current;                     
                current = nextTemp;                 
            }
    
            return prev; 
        }
    };