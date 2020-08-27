/* Hacker Blocks */
/* Title - Tree Bottom View*/
/* Created By - Akash Modak */
/* Date - 27/08/2020 */

// Given a binary tree , print the nodes in left to right manner as visible from below the tree

// Input Format
// Level order input for the binary tree will be given.

// Constraints
// No of nodes in the tree can be less than or equal to 10^7

// Output Format
// A single line containing space separated integers representing the bottom view of the tree

// Sample Input
// 1 2 3 4 5 6  -1 -1 -1 -1 -1 -1 -1
// Sample Output
// 4 2 6 3
// Explanation
// The tree looks like

//              1
//           /      \
//        2           3
//     /     \       /
//    4       5     6
// (Note that 5 and 6 are at the same position so we consider the right one to lower)


#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data,hd;
	node* left,*right;
	node(int d){
		data=d;
		left = NULL;
		right = NULL;
		hd = INT_MAX;
	}
};
node* build(node * root){
	queue<node*> q;
	int d;
	cin>>d;
	if(d==-1)
	return NULL;
	root = new node(d);
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
		if(d!=-1)
		{
			temp->right = new node(d);
			q.push(temp->right);
		}
	}
return root;
}
void bottomView(node* root){
	if(root==NULL)
	return;

	int hd = 0;
	queue<node*> q;
	map<int,int> m;
	
	root->hd = hd;
	q.push(root);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		hd = temp->hd;
		m[hd]=temp->data;
		
		if(temp->left!=NULL){
			
			temp->left->hd = hd-1;
			q.push(temp->left);
		}
		if(temp->right!=NULL){
			temp->right->hd = hd+1;
			q.push(temp->right);
		}
	}
	for(auto x : m){
		cout<<x.second<<" ";
	}
}
int main() {
	node * root = NULL;
	root = build(root);
	bottomView(root);
	return 0;
}