/* Leet Code */
/* Title - Convert Binary Number in a Linked List to Integer */
/* Created By - Akash Modak */
/* Date - 01/11/2020 */

// Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

// Return the decimal value of the number in the linked list.

 

// Example 1:


// Input: head = [1,0,1]
// Output: 5
// Explanation: (101) in base 2 = (5) in base 10
// Example 2:

// Input: head = [0]
// Output: 0
// Example 3:

// Input: head = [1]
// Output: 1
// Example 4:

// Input: head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
// Output: 18880
// Example 5:

// Input: head = [0,0]
// Output: 0
 

// Constraints:

// The Linked List is not empty.
// Number of nodes will not exceed 30.
// Each node's value is either 0 or 1.


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
    int getDecimalValue(ListNode* head) {
        if(head==NULL)
            return 0;
        if(head->next==NULL)
            return head->val;
        
        int count = 0;
        ListNode *temp = head;
        while(temp!=NULL){
            temp = temp->next , count++;
        }
        count -= 1;
        int ans = 0;
        temp = head;
        while(temp!=NULL){
            ans += pow(2,count--)*temp->val;
            temp = temp->next;
        }
        return ans;
    }
};