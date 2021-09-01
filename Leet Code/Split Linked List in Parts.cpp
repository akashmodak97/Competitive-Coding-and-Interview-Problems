/* Leet Code */
/* Title - Split Linked List in Parts */
/* Created By - Akash Modak */
/* Date - 02/09/2021 */

// Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts.

// The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.

// The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.

// Return an array of the k parts.

 

// Example 1:


// Input: head = [1,2,3], k = 5
// Output: [[1],[2],[3],[],[]]
// Explanation:
// The first element output[0] has output[0].val = 1, output[0].next = null.
// The last element output[4] is null, but its string representation as a ListNode is [].
// Example 2:


// Input: head = [1,2,3,4,5,6,7,8,9,10], k = 3
// Output: [[1,2,3,4],[5,6,7],[8,9,10]]
// Explanation:
// The input has been split into consecutive parts with size difference at most 1, and earlier parts are a larger size than the later parts.


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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        int len = 0;
        ListNode* temp = head;
        vector<ListNode*> res;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        
        int extra = len%k;
        int bundleSize = len/k;
        
        if(len<k)
            extra = k-len;
        temp = head;
        ListNode* newNode, *newList = NULL;
        int count = 0;
        while(temp!=NULL){
            if(newList == NULL){
                newList = new ListNode(temp->val);
                newNode = newList;
            }
            else{
                newNode->next = new ListNode(temp->val);
                newNode = newNode->next;
            }
            count++;
            if(count==bundleSize && extra>0){
                extra--;
            }
            else if(count == bundleSize || count == bundleSize+1){
                res.push_back(newList);
                count = 0;
                newList = NULL;
            }
            
            temp = temp->next;
        }
        
        while(extra>0){
            res.push_back(NULL);
            extra--;
        }
        return res;
        
    }
};