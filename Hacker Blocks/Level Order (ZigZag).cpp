/* Hacker Blocks */
/* Title - Level Order (ZigZag) */
/* Created By - Akash Modak */
/* Date - 19/09/2020 */

// Given a binary tree. Print the zig zag order i.e print level 1 from left to right, level 2 from right to left and so on. This means odd levels should get printed from left to right and even levels should be printed from right to left.

// Input Format
// Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL

// Constraints
// None

// Output Format
// Display the values in zigzag level order in which each value is separated by a space

// Sample Input
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
// Sample Output
// 10 30 20 40 50 60 73 

#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *left,*right;
	node(int d){
		data = d;
		left=right=NULL;
	}
};
node* build(string s){
	if(s=="true"){
		int d;
		cin>>d;
		node *root = new node(d);
		string l;
		cin>>l;
		if(l=="true")
		root->left = build(l);
		string r;
		cin>>r;
		if(r=="true")
		root->right = build(r);
		return root;		
	}
	return NULL;
}
void zigzag(node* root){
	queue<node*> q;
	q.push(root);
	bool flag = true;
	while(!q.empty()){
		vector<int> v;
		int s = q.size();
		while(s--){
			node *temp = q.front();
			q.pop();
			v.push_back(temp->data);
			if(temp->left)
			q.push(temp->left);
			if(temp->right)
			q.push(temp->right);
		}
		if(!flag)
		reverse(v.begin(),v.end());
		for(auto x: v)
		cout<<x<<" ";
		flag= !flag;
	}
}
int main() {
	node* root=build("true");
	zigzag(root);
	return 0;
}