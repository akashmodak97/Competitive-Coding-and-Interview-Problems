/* Coding Blocks */
/* Title - Linked List-K Append */
/* Created By - Akash Modak */
/* Date - 25/7/2020 */

// Given a linked list of length N and an integer K , append the last K elements of a linked list to the front. Note that K can be greater than N.

// Input Format
// First line contains a single integer N denoting the size of the linked list.
// Second line contains N space separated integers denoting the elements of the linked list.
// Third line contains a single integer K denoting the number of elements that are to be appended.

// Constraints
// 1 <= N <= 10^4
// 1 <= K <= 10^4

// Output Format
// Display all the elements in the modified linked list.

// Sample Input
// 7
// 1 2 2 1 8 5 6
// 3
// Sample Output
// 8 5 6 1 2 2 1
// Explanation
// Initially the linked list is
// 1→ 2→ 3 → 4 → 5 → 6→ null
// and k = 2. After appending the last two elements to the front , the new linked list looks like
// 5→ 6→ 1→ 2→ 3 → 4 → null

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
void buildlist(Node* &head,int data){
	if(head==NULL){
		Node * x= new Node(data);
		head = x;
		return;
	}
	Node *temp = head;
	while(temp->next!=NULL)
	temp=temp->next;
	Node* c = new Node(data);
	temp->next = c;
	return;
}
void kAppend(Node* &head,int n,int k){
	if(k>=n)
	k=k%n;
	if(k>0){
		Node* fast = head;
		while(k--){
			fast = fast->next;
		}
		Node *slow = head;
		Node *temp=slow;
		Node *temp2 = fast;
		while(fast!=NULL){
			temp2=fast;
			fast = fast->next;
			temp = slow;
			slow = slow->next;
		}
		// cout<<temp2->data<<endl;
		temp2->next = head;
		// cout<<temp->data<<endl;
		temp->next=NULL;
		head = slow;

	}
}
int main() {
	int n,k;
	Node* head = NULL;
	cin>>n;
	int a;
	for(int i=0;i<n;i++){
		
		cin>>a;
		buildlist(head,a);
	}
	cin>>k;
	kAppend(head,n,k);
	Node* temp=head;
	while(temp!=NULL){
	cout<<temp->data<<" ";
	temp=temp->next;
	}
	return 0;
}