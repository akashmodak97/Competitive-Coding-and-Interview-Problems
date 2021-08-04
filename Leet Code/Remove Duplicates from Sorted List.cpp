/* Leet Code */
/* Title - Remove Duplicates from Sorted List */
/* Created By - Akash Modak */
/* Date - 04/08/2021 */


// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

// Input: head = [1,1,2]
// Output: [1,2]


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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return head;
        
        int current = head->val;
        ListNode* node = new ListNode(head->val);
        ListNode* temp = node;
        ListNode* output = temp;
        while(head != NULL){
            
            if(head->val != current){
                node = new ListNode(head->val);
                temp->next = node;
                temp = temp->next;
                current = head->val;
            }
            
            head = head->next;
        }
        
        return output;
    }
};