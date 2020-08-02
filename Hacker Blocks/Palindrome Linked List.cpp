/* Leet Code */
/* Title - Palindrome Linked List */
/* Created By - Akash Modak */
/* Date - 2/8/2020 */

// Check if a linked list is a palindrome.( Boolean return type )

// Input Format
// Add N space separated elements in the list

// Constraints
// None

// Output Format
// Boolean answer( true or false)

// Sample Input
// 5
// 1 2 3 6 8
// Sample Output
// false

#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int d){
		data = d;
		next = NULL;
	}
};
void build(Node* &head, int data){
	if(head == NULL){
		head = new Node(data);
		return;
	}
	Node* temp=head;
	while(temp->next!=NULL)
	temp = temp->next;
	temp->next = new Node(data);
	return;
}
int count(Node* head){
	int c= 0;
	while(head!=NULL){
		c++;
		head= head->next;
	}
	return c;
}
Node* rev(Node* head){
	Node* current = head;
	Node* prev = NULL;
	Node* n = NULL;
	while(current != NULL){
		n = current->next;
		current->next = prev;
		prev = current;
		current = n;
	}
	head = prev;
	// cout<<prev->data;
	return head;
}
bool pal(Node *start, Node *end){
	int c = count(start);
	int n;
	if(c%2){
		n=(c+1)/2;
	}
	else{
		n=c/2;
	}
	int t = n;
	Node *temp = start;
	while(t--){
		temp=end;
		end=end->next;
		
	}
	// cout<<temp->data<<endl;
	temp->next=rev(end);
	// cout<<temp->next->data<<endl;
	temp=temp->next;
	if(c%2)
	n--;
	while(n--){
		if(start->data!=temp->data)
		return false;
		start=start->next;
		temp=temp->next;
	// n--;
	}
	return true;
	
}
int main() {
	int n;
	cin>>n;
	Node* head = NULL;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		build(head,a);
	}
	if(pal(head,head))
	cout<<"true";
	else
	cout<<"false";

	return 0;
}