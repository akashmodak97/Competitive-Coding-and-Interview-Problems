/* Leet Code */
/* Title - Remove Nth Node From End of List */
/* Created By - Akash Modak */
/* Date - 22/09/2020 */

// Given a linked list, remove the n-th node from the end of list and return its head.

// Example:

// Given linked list: 1->2->3->4->5, and n = 2.

// After removing the second node from the end, the linked list becomes 1->2->3->5.
// Note:

// Given n will always be valid.

// Follow up:

// Could you do this in one pass?

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return head;
       
        ListNode* temp = head, *slow = head, * prev = head;
        while(n--){
            temp = temp->next;
        }
        if(temp==NULL){
            head = head->next;
            return head;
        }
        while(temp!=NULL){
            temp = temp->next;
            prev = slow;
            cout<<slow->val<<endl;
            slow = slow->next;
        }
        prev->next = slow->next ;
        // delete slow;
        return head;
    }
};