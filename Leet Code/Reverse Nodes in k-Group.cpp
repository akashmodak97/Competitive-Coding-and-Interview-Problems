/* Leet Code */
/* Title - Reverse Nodes in k-Group */
/* Created By - Akash Modak */
/* Date - 27/09/2020 */

// Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.

// Example:

// Given this linked list: 1->2->3->4->5

// For k = 2, you should return: 2->1->4->3->5

// For k = 3, you should return: 3->2->1->4->5

// Note:

// Only constant extra memory is allowed.
// You may not alter the values in the list's nodes, only nodes itself may be changed.

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
    int num=0;
    void c(ListNode* head){
        
        ListNode* temp = head;
        while(temp!=NULL){
            temp=temp->next;
        num++;
        }
 
    }
    
    ListNode* rev(ListNode* head,int k){
        if(head==NULL)
            return head;
         ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* nextNode = NULL;
        int count = k;
        
        if(num>=k){
           
        while(current!=NULL and count>0){
            nextNode = current->next;
            current->next=prev;
            prev=current;
            current = nextNode;
            count--;
            
            // num--;
        }
            num = num-k;     
             
        }
        // cout<<count<<endl;
        if(current!=NULL and count ==0){
        
            head->next = rev(current, k);
          
        }else if(current!=NULL){
            return head;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
            return head;
        c(head);
        return rev(head,k);
       
    }
};