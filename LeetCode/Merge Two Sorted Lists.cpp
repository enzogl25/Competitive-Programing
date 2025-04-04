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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
             ListNode* dummy = new ListNode(-1);
             ListNode* current = dummy;

             while(list1 != nullptr and list2 != nullptr){
                if(list1->val <= list2->val){
                    current->next = new ListNode(list1->val);
                    list1 = list1->next;
                }
                else{
                    current->next = new ListNode(list2->val);
                    list2 = list2->next;
                }
                current = current->next;
             }

             while(list1 != nullptr){
                current->next = new ListNode(list1->val);
                list1= list1->next;
                current = current->next;
             }
             while(list2 != nullptr){
                current->next = new ListNode(list2->val);
                list2 = list2->next;
                current = current->next;
             }
             ListNode* result = dummy->next;
             return result;
        }
    };