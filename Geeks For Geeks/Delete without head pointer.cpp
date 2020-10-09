/* Geeks For Geeks */
/* Title - Delete without head pointer */
/* Created By - Akash Modak */
/* Date - 09/10/2020 */

// You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. The task is to delete the node. Pointer/ reference to head node is not given. 
// Note: No head reference is given to you.

// Example 1:

// Input:
// N = 2
// value[] = {1,2}
// node = 1
// Output: 2
// Explanation: After deleting 1 from the
// linked list, we have remaining nodes
// as 2.
// Example 2:

// Input:
// N = 4
// value[] = {10,20,4,30}
// node = 20
// Output: 10 4 30
// Explanation: After deleting 20 from
// the linked list, we have remaining
// nodes as 10, 4 and 30.
// Your Task:
// You only need to complete the function deleteNode that takes reference to the node that needs to be deleted. The printing is done automatically by the driver code.

// Expected Time Complexity : O(n)
// Expected Auxilliary Space : O(n)

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;

Node *findNode(Node* head, int search_for)
{
    Node* current = head;
    while (current != NULL)
    {
        if (current->data == search_for)
            break;
        current = current->next;
    }
    return current;
}


void insert()
{
    int n,i,value;
    Node *temp;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            head=new Node(value);
            temp=head;
            continue;
        }
        else
        {
            temp->next= new Node(value);
            temp=temp->next;
            temp->next=NULL;
        }
    }
}

/* Function to print linked list */
void printList(Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}


void deleteNode(Node *node_ptr);

/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */

    int t,k,n,value;
    
    scanf("%d",&t);
    while(t--)
    {
        insert();
        scanf("%d",&k);
        Node *del = findNode(head, k);
        if (del != NULL && del->next != NULL)
        {
            deleteNode(del);
        }
        printList(head);
    }
    return(0);
}


// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted
void deleteNode(Node *node)
{
   // Your code here
   Node* temp = node->next;
   while(temp->next!=NULL ){
       node->data = temp->data;
       node = node->next;
       temp = temp->next;
   }
   node->data = temp->data;
   node->next = NULL;
}

