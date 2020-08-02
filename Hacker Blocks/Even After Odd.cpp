/* Hacker Blocks */
/* Title - Even After Odd */
/* Created By - Akash Modak */
/* Date - 2/8/2020 */


// Arrange elements in a Linked List such that all even numbers are placed after odd numbers.

// Input Format
// Enter N space separated Elements

// Constraints
// None

// Output Format
// Linked list with all the odd numbers before even numbers

// Sample Input
// 5
// 1 2 2 2 1
// Sample Output
// 1 1 2 2 2


#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};
void create(Node* &head,int data){
	if(head==NULL){
		head = new Node(data);
		return;
	}
	Node * c = head;
	while(c->next!=NULL)
	c = c->next;
	c->next = new Node(data);
	return;
}

Node* evenodd(Node* head){
	Node* odd = NULL;
	Node* even = NULL;
	Node* temp = head;
	while(temp!=NULL){
		if(temp->data%2==0)
		create(even,temp->data);
		else
		create(odd,temp->data);
		temp=temp->next;
	}
	temp = odd;
	while(temp->next!=NULL)
	temp = temp->next;
	temp->next = even;
	return odd;
}
int main() {
	int n;
	cin>>n;
	Node* head = NULL;
	while(n--){
		int a;
		cin>>a;
		create(head,a);
	}
	head = evenodd(head);
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	return 0;
}