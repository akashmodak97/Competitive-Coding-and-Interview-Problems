/* Hacker Blocks */
/* Title - Kth Element from The Last */
/* Created By - Akash Modak */
/* Date - 2/8/2020 */

// Given a linked list with n nodes. Find the kth element from last without computing the length of the linked list.

// Input Format
// First line contains space separated integers representing the node values of the linked list. The list ends when the input comes as '-1'. The next line contains a single integer k.

// Constraints
// n < 10^5

// Output Format
// Output a single line containing the node value at the kth element from last.

// Sample Input
// 1 2 3 4 5 6 -1
// 3
// Sample Output
// 4
// Explanation
// The linked list is 1 2 3 4 5 6. -1 is not included in the list. So the third element from the last is 4

#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int d){
		this->data=d;
		this->next=NULL;
	}
};
void buildlist(Node* &head,int data){
	if(head==NULL){
		Node *temp = new Node(data);
		head = temp;
		return;
	}
	Node *c = head;
	while(c->next!=NULL)
	c=c->next;
	Node * temp= new Node(data);
	c->next = temp;
	return;
}

int main() {
	Node *head = NULL;
	int temp1;
	cin>>temp1;
	while(temp1!=-1){
		buildlist(head,temp1);
		cin>> temp1;
	}
	int k;
	cin>>k;
	Node * temp;
	temp=head;
	while(k--){
		temp=temp->next;
	}
	Node * slow = head;
	while(temp!=NULL)
	{
		temp=temp->next;
		slow=slow->next;
	}
	cout<<slow->data<<endl;
	return 0;
}