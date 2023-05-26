/* Leet Code */
/* Title - Partition List */
/* Created By - Akash Modak */
/* Date - 26/05/2023 */

// Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

// You should preserve the original relative order of the nodes in each of the two partitions.

 

// Example 1:


// Input: head = [1,4,3,2,5,2], x = 3
// Output: [1,2,2,4,3,5]
// Example 2:

// Input: head = [2,1], x = 2
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* curr=head, *prev=NULL, *last=head;
        int count=1;
        if(head==NULL || head->next==NULL) return head;
        while(last!=NULL and last->next!=NULL)last=last->next,count++;
        while(curr!=NULL and count){
            if(curr->val>=x and curr!=last){
                if(curr==head){
                    prev=head->next;
                    last->next=head;
                    last=last->next;
                    last->next=NULL;
                    head=prev;
                    curr=head;
                }else{
                    prev->next=curr->next;
                    last->next=curr;
                    last=last->next;
                    last->next=NULL;
                    curr=prev->next;
                }
            }else{
                prev=curr;
                curr=curr->next;
            }
            count--;
        }

        return head;
    }
};
