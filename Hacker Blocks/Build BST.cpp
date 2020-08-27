/* Hacker Blocks */
/* Title - Build BST */
/* Created By - Akash Modak */
/* Date - 27/08/2020 */

// You are given a sorted data of n integers. You have to form a balanced Binary Search Tree and then print preorder traversal of the tree.

// Input Format
// First line contains integer t as number of test cases.
// Each test case contains following input. First line contains integer n which represents the length of the data and next line contains n space separated integers denoting the elements for the BST.

// Constraints
// 1 < t < 100
// 1< n < 1000

// Output Format
// For each testcase , print the preorder traversal of the BST in a new line.

// Sample Input
// 1
// 7
// 1 2 3 4 5 6 7
// Sample Output
// 4 2 1 3 6 5 7
// Explanation
// The tree looks like

//              4
//           /      \
//        2           6
//     /     \      /    \
//    1       3    5      7
// We print the preorder of the final tree.

#include<bits/stdc++.h>
using namespace std;
class node{
	public: 
	int data;
	node* right,*left;
	node(int d){
		data = d;
		left=NULL;
		right=NULL;
	}
};
node* build(int a[],int start,int end){
	if(start>end){
		return NULL;
	}
	int mid=start + (end-start)/2;
	node* temp=new node(a[mid]);
	
	temp->left=build(a,start,mid-1);
	
	temp->right=build(a,mid+1,end);
	return temp;
}

void preorder(node* root){
	if(root==NULL)
	return;

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int main() {
	int t;
	cin>>t;
	while(t--){
		node* root=NULL;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		root=build(a,0,n-1);
		preorder(root);
		cout<<endl;
	}
	return 0;
}