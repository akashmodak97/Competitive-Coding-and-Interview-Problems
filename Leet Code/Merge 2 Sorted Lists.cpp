/* Leet Code */
/* Title - Merge 2 Sorted Lists */
/* Created By - Akash Modak */
/* Date - 24/09/2020 */

// Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.

// Example:

// Input: 1->2->4, 1->3->4
// Output: 1->1->2->3->4->4

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        head = new ListNode(-1);
        ListNode* temp = head;
        while(t1!=NULL and t2!=NULL){
            if(t1->val<t2->val){
                temp->next = new ListNode(t1->val);
                t1=t1->next;
                
            }else{
                temp->next = new ListNode(t2->val);
                t2=t2->next;
            }
            temp=temp->next;
        }
        while(t1!=NULL){
            temp->next = new ListNode(t1->val);
                t1=t1->next;
            temp=temp->next;
        }
        while(t2!=NULL){
             temp->next = new ListNode(t2->val);
                t2=t2->next;
            temp = temp->next;
        }
        return head->next;
    }
};