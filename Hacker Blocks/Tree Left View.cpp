/* Hacker Blocks */
/* Title - Tree Left View */
/* Created By - Akash Modak */
/* Date - 26/10/2020 */

// Given a binary tree , print its nodes from root to bottom as visible from left side of tree

// Input Format
// Level order input for the binary tree will be given.

// Constraints
// No of nodes in the tree can be less than or equal to 10^7

// Output Format
// A single line containing space separated integers representing the left view of the tree

// Sample Input
// 1 2 3 4 5 -1 6 -1 -1 -1 -1 -1 -1
// Sample Output
// 1 2 4
// Explanation
// The tree looks like

//              1
//           /      \
//        2           3
//     /     \           \
//    4       5           6
// When viewed from the left , we would see the nodes 1,2 and 4.

#include<bits/stdc++.h>
using namespace std;
class node{
	public: int data;
	node* left,*right;
	node(int d){
		data = d;
		left = right = NULL;
	}
};

void leftView(node* root){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		int n = q.size();
		for(int i=0;i<n;i++){
			node* temp = q.front();
			q.pop();
			if(i==0)
			cout<<temp->data<<" ";

			if(temp->left)
			q.push(temp->left);
			if(temp->right)
			q.push(temp->right);
		}
	}
	return;
}
void leftViewRecur(node* root,int level,int *maxLevel){
	if(root==NULL)
	return;

	if(*maxLevel<level){
		cout<<root->data<<" ";
		*maxLevel = level;
	}
	leftViewRecur(root->left,level+1,maxLevel);
	leftViewRecur(root->right,level+1,maxLevel);
}

node* create(){
	int d;
	cin>>d;
	if(d==-1)
	return NULL;
	node* root = new node(d);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		cin>>d;
		if(d!=-1){
			temp->left = new node(d);
			q.push(temp->left);
		}
		cin>>d;
		if(d!=-1){
			temp->right = new node(d);
			q.push(temp->right);
		}
	}
	return root;
}
int main() {
	node* root = create();
	leftView(root);
	int m = 0;
	// inorder(root); cout<<endl;
	// leftViewRecur(root,1,&m);
	return 0;
}