/* Hacker Blocks */
/* Title - Largest BST in a Binary Tree */
/* Created By - Akash Modak */
/* Date - 26/10/2020 */

// Given a Binary Tree, write a program that returns the size of the largest subtree which is also a Binary Search Tree (BST)

// Input Format
// The first line of input will contain an integer n. The next line will contain n integers denoting the the preorder traversal of the BT. The next line will contain n more integers denoting the inorder traversal of the BT.

// Constraints
// 2 ≤ N ≤ 10^3

// Output Format
// A single integer denoting the size ( no of nodes in tree ) of largest BST in the given tree.

// Sample Input
// 4
// 60 65 50 70
// 50 65 60 70
// Sample Output
// 2
// Explanation
// The tree looks like

//              60
//           /      \
//        65           70
//      /           
//    50       
// The largest BST subtree is

//        65           
//      /           
//    50       
// which has the size 2 i.e. it has 2 nodes in it.

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
class NB{
	public:
	int numOfNode,maxNode;
	bool BST;
};
node * build(int in[],int pre[],int start,int end,int &preIndex){
	if(start>end){
		return NULL;
	}
	node * root = new node(pre[preIndex]);
	int i;
	for(i=start;i<=end;i++){
		if(in[i]==pre[preIndex])
		break;
	}
	preIndex++;
	root->left = build(in,pre,start,i-1,preIndex);
	root->right = build(in,pre,i+1,end,preIndex);
	return root;
}
bool checkBST(node* root,int minV=INT_MIN,int maxV = INT_MAX){
	if(root==NULL)
	return true;

	if(root->data>=minV && root->data<=maxV && checkBST(root->left,minV,root->data) && checkBST(root->right,root->data,maxV))
	return true;
	return false;
}
int num(node* root){
	
	if(root==NULL)
	return 0;
	int l = num(root->left);
	int r = num(root->right);
	return l+r+1;
}
NB longestBST(node* root){
	NB temp;
	if(root==NULL){
		temp.numOfNode = 0;
		temp.BST = true;
		temp.maxNode = 0;
		return temp;
	}

	NB left = longestBST(root->left);
	NB right = longestBST(root->right);

	if(left.BST and right.BST and checkBST(root)){
		temp.BST = true;
		temp.numOfNode = num(root);
		// temp.maxNode = max(temp.numOfNode,max(left.maxNode,right.maxNode));
		// cout<<left.numOfNode<<" "<<right.numOfNode<<" "<<num(root)<<" "<<temp.maxNode<<endl;	
	}
	else{
	temp.BST =false;
	temp.numOfNode = 0;
	// temp.maxNode = 0;
	}
	temp.maxNode = max(temp.numOfNode,max(left.maxNode,right.maxNode));
	return temp;
}
int main() {
	int n;
	cin>>n;
	int pre[n],in[n];
	for(int i=0;i<n;i++)
	cin>>pre[i];
	for(int i=0;i<n;i++)
	cin>>in[i];
	int p = 0;
	node* root = build(in,pre,0,n-1,p);
	NB temp = longestBST(root);
	// inorder(root);cout<<endl;
	// cout<<num(root)<<endl;
	cout<<temp.maxNode<<endl;
	return 0;
}
