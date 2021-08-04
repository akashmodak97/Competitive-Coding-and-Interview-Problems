/* Leet Code */
/* Title - Remove Duplicates from Sorted List II */
/* Created By - Akash Modak */
/* Date - 04/08/2021 */


// Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

// Input: head = [1,2,3,3,4,4,5]
// Output: [1,2,5]

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
        
        unordered_map<int,int> count;
        
        ListNode* pointer = head;
        while(pointer!=NULL){
            count[pointer->val]++;
            pointer = pointer->next;
        }
        
        ListNode* output = NULL, *res = NULL;
        
        pointer = head;
        while(pointer!=NULL){
            if(count[pointer->val]==1){
                if(output == NULL){
                    output = new ListNode(pointer->val);
                }
                else{
                    output->next = new ListNode(pointer->val);
                    output = output->next;
                }
                
                if(res == NULL)
                    res = output;
            }
            pointer = pointer->next;
        }
        
        return res;
    }
};