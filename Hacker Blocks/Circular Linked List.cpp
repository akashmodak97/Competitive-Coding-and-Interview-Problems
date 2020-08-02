/* Leet Code */
/* Title - Circular Linked List */
/* Created By - Akash Modak */
/* Date - 2/8/2020 */

// We are given a linked list which contains a cycle. Detect that cycle and break it. Print the linked list after removing the cycle.

// Input Format
// The first line contains space separated integers. The integers are such that all the values are distinct but the value start repeating once the cycle gets completed. The list of integers given ends when -1 is input.

// Constraints
// n < 10^5 where n is the length of list without the cycle

// Output Format
// Output single line containing space separated integers representing the list

// Sample Input
// 1 2 3 4 5 2 3 -1
// Sample Output
// 1 2 3 4 5
// Explanation
// Initially the first five elements are unique but starts repeating from 2. This means there is a link from 5 back to 2. So it represents a cycle. We have to break this cycle and print the list after breaking the cycle.

#include<iostream>
using namespace std;
bool cycle = false;
class Node{
	public:
	int data;
	Node* next;
	Node(int d){
		data=d;
		next = NULL;
	}
};
Node* addNode(Node* head,Node* add){
	if(head==NULL){
		
		head = add;
		return head;
	}
	Node* temp = head;
	Node* save;
	while(temp->next!=NULL){
		if(temp->data==add->data){
			save = temp;
			cycle=true;
		}
		temp=temp->next;
	}
	if(cycle){
		temp->next=save;
	}
	else{
		temp->next = add;
	}
	return head;
}
void inp(Node* &head){
	int d;
	while(cin>>d && d!=-1){
		if(cycle){
			break;
		}
		Node* temp = new Node(d);
		head = addNode(head,temp);
	}
}
Node* detectCycle(Node* head){
	Node* slow = head;
	Node* fast = head;
	
	while(fast!=NULL && fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(slow==fast)
		break;
	}
	return fast;
}
void breakCycle(Node*&head){
	Node* fast = detectCycle(head);
	if(fast==head){
		Node*temp = head->next;
		while(temp->next!=head)
		temp=temp->next;
		temp->next=NULL;
		return;
	}
	Node* prev = fast;
	Node* slow = head;
	if(cycle){
		while(slow!=fast){
			slow=slow->next;
			prev = fast;
			fast = fast->next;
		}
		prev ->next = NULL;
	}
}
int main() {
	Node* head = NULL;
	inp(head);
	breakCycle(head);
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	return 0;
}