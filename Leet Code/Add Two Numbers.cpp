/* Leet Code */
/* Title - Add Two Numbers */
// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Example:

// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8
// Explanation: 342 + 465 = 807.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int a,b;
        ListNode* l3 = new ListNode();
        ListNode *start = l3;
        ListNode* temp = NULL;
        a = (l1!=NULL)?l1->val:0;
        b = (l2!=NULL)?l2->val:0;
        l3->val = (a+b+carry)%10;
        l3->next = NULL;
        carry = (a+b+carry)/10;
        l1=l1->next;
        l2=l2->next;
        while(l1!=NULL or l2!= NULL){
            a = (l1!=NULL)?l1->val:0;
            b = (l2!=NULL)?l2->val:0;
            temp = new ListNode();
            temp->val = (a+b+carry)%10;
            temp->next = NULL;
            l3->next = temp;
            l3 = l3->next;
            carry = (a+b+carry)/10;
            l1 = (l1!=NULL)?l1->next:NULL;
            l2 = (l2!=NULL)?l2->next:NULL;
        }
        if(carry != 0)
        {
            temp = new ListNode();
            temp->val = carry;
            temp->next = NULL;
            l3 -> next = temp;
        }
        
        return start;
    }
};