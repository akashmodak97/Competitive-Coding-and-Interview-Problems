/* Hacker Blocks */
/* Title - Linked List K Reverse */
/* Created By - Akash Modak */
/* Date - 2/8/2020 */

// Given a head to Linked List L, write a function to reverse the list taking k elements at a time. Assume k is a factor of the size of List.

// You need not have to create a new list. Just reverse the old one using head.

// Input Format
// The first line contains 2 space separated integers N and K

// The next line contains N space separated integral elements of the list.

// Constraints
// 0 <= N <= 10^6 0 <= K <= 10^6

// Output Format
// Display the linkedlist after reversing every k elements

// Sample Input
// 9 3
// 9 4 1 7 8 3 2 6 5
// Sample Output
// 1 4 9 3 8 7 5 6 2
// Explanation
// N = 9 & K = 3

// Original LL is : 9 -> 4 -> 1 -> 7 -> 8 -> 3 -> 2 -> 6 -> 5

// After k Reverse : 1 -> 4 -> 9 -> 3 -> 8 -> 7 -> 5 -> 6 -> 2

#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node();
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
	~Node();
	
};
void buildlist(Node* &head,int data){
	if(head==NULL){
		Node *temp=new Node(data);
		head = temp;
		return;
	}
	Node* temp = head;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next = new Node(data);
	return;
}

Node* rev(Node* head,int k){
	Node* current = head;
	Node* prev = NULL;
	Node* next = NULL;
	int count = 0;
	while(current!= NULL and count<k){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		count++;
	}
	if(next!=NULL)
		head->next = rev(next,k);
	return prev;
}
int main() {
	int n,k;
	cin>>n>>k;
	Node* head = NULL;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		buildlist(head,temp);
	}
	head = rev(head,k);
	Node* c = head;
	while(c!=NULL){
		cout<<c->data<<" ";
		c=c->next;
	}

	return 0;
}