/* Hacker Blocks */
/* Title - Cycle Detection And Removal In A Linked List */
/* Created By - Akash Modak */
/* Date - 2/8/2020 */

// Given the head pointer to a linked list , complete the function to check whether there is a cycle present in the linked list. If so , modify the linked list to remove the cycle.

// Note : You are only supposed to update the designated function. Do not change/alter the remaining code or your program may not work.

// Input Format
// Your function accepts one single argument that is the head pointer to the linked list.

// Constraints
// Your function should run in O(n) time.

// Output Format
// Your function should return a boolean value - True/False , indicating the presence of the cycle.
// True if cycle is present, False otherwise.
// If true , remove the cycle as well.

// Sample Input
// Consider a linked list like 
// 1 -> 2 -> 3
//      ^    |
//      |    v
//      5<-  4
// Sample Output
// Your function should return True for the above linked list and remove the cycle as well. <br>
// The new linked list should look like - 1->2->3->4->5-> NULL
// Explanation
// Clearly there is a cycle present. We return true to indicate it and remove it.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

// head - Head pointer of the Linked List
// Return a boolean value indicating the presence of cycle
// If the cycle is present, modify the linked list to remove the cycle as well
bool floydCycleRemoval(Node *head)
{
    /* Code here */
    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    while(fast!=NULL and fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow){
            flag=true;
        break;
        }
    }
    if(!flag){
        return false;
    }
    else{
        slow = head;
        Node * temp = fast;
        while(fast!=slow){
            temp=fast;
            fast=fast->next;
            slow=slow->next;
        }
        temp->next=NULL;
    }
    return true;
}

/*
*
*
*   You do not need to refer or modify any code below this. 
*   Only modify the above function definition.
*	Any modications to code below could lead to a 'Wrong Answer' verdict despite above code being correct.
*	You do not even need to read or know about the code below.
*
*
*
*/

void buildCycleList(Node *&head)
{
    unordered_map<int, Node *> hash;
    int x;
    cin >> x;
    if (x == -1)
    {
        head = NULL;
        return;
    }
    head = new Node(x);
    hash[x] = head;
    Node *current = head;
    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        if (hash.find(x) != hash.end())
        {
            current->next = hash[x];
            return;
        }
        Node *n = new Node(x);
        current->next = n;
        current = n;
        hash[x] = n;
    }
    current->next = NULL;
}

void printLinkedList(Node *head)
{
    unordered_set<int> s;
    while (head != NULL)
    {
        if (s.find(head->data) != s.end())
        {
            cout << "\nCycle detected at " << head->data;
            return;
        }
        cout << head->data << " ";
        s.insert(head->data);
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;

    buildCycleList(head);

    bool cyclePresent = floydCycleRemoval(head);
    if (cyclePresent)
    {
        cout << "Cycle was present\n";
    }
    else
    {
        cout << "No cycle\n";
    }

    cout << "Linked List - ";
    printLinkedList(head);

    return 0;
}