/* Leet Code */
/* Title - Swap Nodes in Pairs */
/* Created By - Akash Modak */
/* Date - 27/09/2020 */

// Given a linked list, swap every two adjacent nodes and return its head.

// You may not modify the values in the list's nodes, only nodes itself may be changed.

 

// Example:

// Given 1->2->3->4, you should return the list as 2->1->4->3.

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
    ListNode* swapPairs(ListNode* head) {
        int k = 2;
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* nextNode = NULL;
        
        while(current!=NULL and k>0){
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
            k--;
        }
        if(current!=NULL)
            head->next = swapPairs(current);
        return prev;
    }
};