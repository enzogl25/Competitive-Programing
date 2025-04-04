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

    void insertAtEnd(ListNode*& head, int value){
        ListNode* newNode = new ListNode(value);

        if(head == nullptr){
            head = newNode;
            return;
        }

        ListNode* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }

        temp->next = newNode;
    }

    ListNode* reverseList(ListNode *head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr != nullptr){
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int size1 = getSize(l1);
        int size2 = getSize(l2);

        while (size1 < size2) {
            insertAtEnd(l1, 0);
            size1++;
        }
        while (size2 < size1) {
            insertAtEnd(l2, 0);
            size2++;
        }

        ListNode* result = nullptr;
        int carry = 0;

        while (l1 != nullptr && l2 != nullptr) {
            int sum = l1->val + l2->val + carry;
            int digit = sum % 10;
            carry = sum / 10;
            insertAtEnd(result, digit);

            l1 = l1->next;
            l2 = l2->next;
        }

        if (carry > 0)
            insertAtEnd(result, carry);

        return result;
    }
};
