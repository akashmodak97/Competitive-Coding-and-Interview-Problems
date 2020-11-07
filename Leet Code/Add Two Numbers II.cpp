/* Leet Code */
/* Title - Add Two Numbers II */
/* Created By - Akash Modak */
/* Date - 8/11/2020 */


// You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Follow up:
// What if you cannot modify the input lists? In other words, reversing the lists is not allowed.

// Example:

// Input: (7 -> 2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 8 -> 0 -> 7

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
    ListNode* reverse(ListNode *l){
        ListNode *curr = l;
        ListNode *next1= NULL, *prev = NULL;
        
        while(curr!=NULL){
            next1 = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next1;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        else if(l2 == NULL)
            return l1;
        else if(l1==NULL and l2==NULL)
            return NULL;
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode * temp1 = l1;
        ListNode * temp2 = l2;
        ListNode * ans = NULL;
        ListNode * output ;
        bool flag = true;
        int carry = 0;
        while(temp1!=NULL and temp2!=NULL){
            int s = temp1->val + temp2->val + carry;
            carry = s/10;
            if(s>9)
                {s = s%10;}
            
            
            if(flag)
            {
                ans = new ListNode(s);    
                output = ans;
                // ans = ans->next;
                flag = false;
            }else{
                ans->next = new ListNode(s);
                ans = ans->next;
            }
            
            // cout<<temp1->val<<" "<<temp2->val<<" "<<s<<endl;
            temp1 = temp1->next;
            temp2 = temp2->next;
            
        }
        while(temp1!=NULL){
            int s = temp1->val + carry;
            carry = s/10;
            if(s>9)
            {
                s = s%10;
            }
            // carry=s/10;
            ans->next = new ListNode(s);
            ans = ans->next;
            
            temp1 = temp1->next;
        }
        while(temp2!=NULL){
            int s = temp2->val + carry;
            carry = s/10;
            if(s>9)
              {s = s%10;}
            // carry = s/10;
            ans->next = new ListNode(s);
            ans = ans->next;
            temp2 = temp2->next;
        }
        if(carry){
            ans ->next = new ListNode(1);
        }
        output = reverse(output);
        return output;
    }
};