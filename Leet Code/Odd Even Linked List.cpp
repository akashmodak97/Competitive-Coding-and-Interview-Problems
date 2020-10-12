/* Leet Code */
/* Title - Odd Even Linked List */
/* Created By - Akash Modak */
/* Date - 12/10/2020 */

// Given a singly linked list, group all odd nodes together followed by the even nodes. Please note here we are talking about the node number and not the value in the nodes.

// You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity.

// Example 1:

// Input: 1->2->3->4->5->NULL
// Output: 1->3->5->2->4->NULL
// Example 2:

// Input: 2->1->3->5->6->4->7->NULL
// Output: 2->3->6->7->1->5->4->NULL

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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
      
        ListNode* temp = head;
        
        ListNode* even = head->next;
        ListNode* odd = head;
        temp = temp->next->next;
        ListNode* temp1 = odd;
        ListNode* temp2 = even;
        bool flag = true;
        int count = 2;
        while(temp->next!=NULL){
           count++;
           if(flag)
           {
               odd->next = temp;
               odd = odd->next;
           }else{
               even->next = temp;
               even = even->next;
           }
            flag = !flag;
            temp = temp->next;
        }
       
        if(count%2==0){
            odd->next = temp;
            odd = odd->next;
            
        }else{
            even->next = temp;
            even = even->next;
        }
            
        even->next = NULL;
        odd->next = temp2;
        return temp1;
    }
};