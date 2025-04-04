#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {

    
    void insertAtEnd(ListNode*& head, int value){
        ListNode* newNode = new ListNode(value);

        if(head == nullptr){
            head = newNode;
        }

        ListNode* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }

        temp->next = newNode;
    }

    int getSize(ListNode* head){
        int count = 0;
        while(head != nullptr){
            count++;
            head = head->next;
        }
        return count;
    }

    void insertAtBeginning(ListNode*& head, int value){
        ListNode* newNode = new ListNode(value);
        newNode->next = head;
        head = newNode;
    }

public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode* l3 = nullptr;
      int size1 = getSize(l1);
      int size2 = getSize(l2);

      if(size1 > size2){
        for(int i = 0; i < size1 - size2; i++){
            insertAtEnd(l2, 0);
        }
      }
      if(size1 < size2){
        for(int i = 0; i < size2 - size1; i++){
            insertAtEnd(l1, 0);
        }
      }

      int r = 0, val = 0;
      while(l1 != nullptr){

            int sum = l1->val; + l2->val + r;
        
            val = sum % 10;
            r = sum / 10;
            insertAtBeginning(l3, val);
            
            l1 = l1->next;
            l2 = l2-> next;
      }
      if(r > 0)insertAtBeginning(l3, r);

      return l3;
  }
};