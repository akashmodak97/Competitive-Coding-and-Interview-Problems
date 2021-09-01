/* Leet Code */
/* Title - Rotate List */
/* Created By - Akash Modak */
/* Date - 02/09/2021 */


// Given the head of a linked list, rotate the list to the right by k places.

 

// Example 1:


// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]
// Example 2:


// Input: head = [0,1,2], k = 4
// Output: [2,0,1]


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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        
        ListNode* temp = head, *last = head;
        int length = 0;
        while(last!=NULL){
            last = last->next;
            length++;
        }
        
        int rotate = k%length;
        int count = 1;
        
        if(rotate==0)
            return head;
        
        while(length-count!=rotate) {
            temp = temp->next;
            count++;
        }
        
        ListNode *newHead = temp->next;
        last = temp->next;
        while(last->next!=NULL){
            last = last->next;
        }
        temp->next = NULL;
        last->next = head;
        head = newHead;
        
        return head;
        
    }
};