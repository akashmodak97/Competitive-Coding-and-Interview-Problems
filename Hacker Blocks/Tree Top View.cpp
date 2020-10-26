/* Hacker Blocks */
/* Title - Tree Top View */
/* Created By - Akash Modak */
/* Date - 26/10/2020 */

// Given a binary tree , print the nodes in left to right manner as visible from above the tree

// Input Format
// Level order input for the binary tree will be given.

// Constraints
// No of nodes in the tree can be less than or equal to 10^7

// Output Format
// A single line containing space separated integers representing the top view of the tree

// Sample Input
// 1 2 3 4 5 6 -1 -1 -1 -1 -1 -1 -1
// Sample Output
// 4 2 1 3
// Explanation
// The tree looks like

//              1
//           /      \
//        2           3
//     /     \       /
//    4       5     6
// When viewed from the top , we would see the nodes 4, 2, 1 and 3.

#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	int hd;
	node* left;
	node* right;
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
	int hd = 0;
	queue<node*> q;
	node * root = new node(d);
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
void topView(node* root){
	queue<node*> q;
	map<int,int> m;
	int hd = 0;
	root->hd = hd;
	q.push(root);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		hd = temp->hd;
		if(m[hd]==0){
			m[hd] = temp->data;
		}
		if(temp->left){
			temp->left->hd = hd - 1;
			q.push(temp->left);
		}
		if(temp->right){
			temp->right->hd = hd+1;
			q.push(temp->right);
		}
	}

	for(auto x: m){
		cout<<x.second<<" ";
	}
}

int main() {
	node * root = build();
	topView(root);
	return 0;
}
