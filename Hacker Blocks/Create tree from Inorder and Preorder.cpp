/* Hacker Blocks */
/* Title - Level Order (ZigZag) */
/* Created By - Akash Modak */
/* Date - 19/09/2020 */

// Given preorder and inorder create the tree

// Input Format
// Enter the size of the preorder array N then add N more elements and store in the array denoting the preorder traversal of the tree. Then enter the size of the inorder array M and add M more elements and store the inorder traversal of the array.

// Constraints
// 1 <= N, M <= 10^4

// Output Format
// Display the tree using a modified preorder function. For each node , first print its left child's data , then the data of the root itself , then the data of its right child. Do this for each node in a new line in preorder manner. If one of the children does not exist print END in its place. Refer to the sample testcase.

// Sample Input
// 3
// 1 2 3
// 3
// 3 2 1
// Sample Output
// 2 => 1 <= END
// 3 => 2 <= END
// END => 3 <= END
// Explanation
// The above tree looks like

//          1
//        /
//      2
//    /
//  3

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

node* build(int pre[],int in[],int start,int end,int &preIndex){
	if(start>end){
		return NULL;
	}

	node* root = new node(pre[preIndex]);
	
	int i;
	for(i=start;i<=end;i++)
	if(pre[preIndex]==in[i])
	break;
	preIndex++;
	root->left = build(pre,in,start,i-1,preIndex);
	root->right = build(pre,in,i+1,end,preIndex);
	return root;
}
void modifiedPreorder(node* root){
	if(root==NULL)
	return;
	if(root->left)
	cout<<root->left->data<<" => ";
	else
	cout<<"END => ";
	cout<<root->data;
	if(root->right)
	cout<<" <= "<<root->right->data<<endl;
	else
	cout<<" <= END "<<endl;
	
	modifiedPreorder(root->left);
	modifiedPreorder(root->right);
	return;
}
int main() {
	int n;
	cin>>n;
	int pre[n],in[n];
	for(int i=0;i<n;i++)
	cin>>pre[i];

	cin>>n;
	for(int i=0;i<n;i++)
	cin>>in[i];
	// 	for(int i=0;i<n;i++)
	// cout<<in[i]<<" ";
	// cout<<endl;
	int m=0;
	node* root=build(pre,in,0,n-1,m);
	// cout<<root->data;
	modifiedPreorder(root);
	return 0;
}