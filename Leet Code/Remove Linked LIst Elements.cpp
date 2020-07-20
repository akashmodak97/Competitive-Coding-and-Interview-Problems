/* Leet Code */
/* Title - Remove Linked List Elements */
/* Created By - Akash Modak */
/* Date - 20/7/2020 */

Remove all elements from a linked list of integers that have value val.

Example:

Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5

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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL or head->next==NULL){
            if(head==NULL)
                return head;
            else if(head->next==NULL and head->val==val){
                head= head->next;
                return head;
            }
            return head;
            
        }
        if(head->val==val)
            head = removeElements(head->next,val);
        else
            head->next = removeElements(head->next,val);
        return head;
    }
};