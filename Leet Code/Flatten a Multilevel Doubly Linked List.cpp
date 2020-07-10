/* Leet Code */
/* Title - Flatten a Multilevel Doubly Linked List */
/* Created By - Akash Modak */
/* Date - 9/7/2020 */

// You are given a doubly linked list which in addition to the next and previous pointers, it could have a child pointer, which may or may not point to a separate doubly linked list. These child lists may have one or more children of their own, and so on, to produce a multilevel data structure, as shown in the example below.

// Flatten the list so that all the nodes appear in a single-level, doubly linked list. You are given the head of the first level of the list.

 

// Example 1:

// Input: head = [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
// Output: [1,2,3,7,8,11,12,9,10,4,5,6]

// Input: head = [1,2,null,3]
// Output: [1,3,2]
// Explanation:

// The input multilevel linked list is as follows:

//   1---2---NULL
//   |
//   3---NULL
// Example 3:

// Input: head = []
// Output: []

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head){
            return head;
        }
        Node* curr = head;
        while(curr!=NULL){
            if(curr->child!=NULL){
                Node *temp = curr->next;
                Node* x = flatten(curr->child);
                x->prev = curr;
                curr->next = x;
                Node *end = x;
                while(end->next!=NULL)
                    end = end->next;
                end->next = temp;
                if(temp!=NULL)
                    temp->prev=end;
                curr->child=NULL;
            }
            curr=curr->next;
        }
        return head;
    }
};