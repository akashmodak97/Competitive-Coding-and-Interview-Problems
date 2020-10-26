/* Hacker Blocks */
/* Title - Tree Right View */
/* Created By - Akash Modak */
/* Date - 26/10/2020 */

// Given a binary tree , print its nodes from root to bottom as visible from right side of tree

// Input Format
// Level order input for the binary tree will be given.

// Constraints
// No of nodes in the tree can be less than or equal to 10^7

// Output Format
// A single line containing space separated integers representing the right view of the tree

// Sample Input
// 1 2 3 4 5 -1 6 -1 -1 -1 -1 -1 -1
// Sample Output
// 1 3 6
// Explanation
// The tree looks like

//              1
//           /      \
//        2           3
//     /     \           \
//    4       5           6
// When viewed from the left , we would see the nodes 1,3 and 6.


#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node* left,*right;
	node(int d){
		data = d;
		left=right=NULL;
	}
};
node* build(){
	int d;
	cin>>d;
	if(d==-1)
	return NULL;

	node* root = new node(d);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* temp= q.front();
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
void rightView(node* root,int level,int &maxLevel){
	if(root==NULL)
	return ;

	if(maxLevel<level){
		cout<<root->data<<" ";
		maxLevel = level;
	}

	rightView(root->right,level+1,maxLevel);
	rightView(root->left,level+1,maxLevel);
}
int main() {
	node* root = build();
	int m = 0;
	rightView(root,1,m);
	return 0;
}