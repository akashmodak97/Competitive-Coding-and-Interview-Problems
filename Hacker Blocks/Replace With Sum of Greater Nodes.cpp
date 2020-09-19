/* Hacker Blocks */
/* Title - Replace With Sum of Greater Nodes */
/* Created By - Akash Modak */
/* Date - 19/09/2020 */

// Given a binary search tree, replace each nodes' data with the sum of all nodes' which are greater or equal than it. Include the current node's data also.

// Input Format
// The first line contains a number n showing the length of the inorder array of BST. The next line contains n integers denoting the elements of the array.

// Constraints
// 2 ≤ N ≤ 10^3

// Output Format
// Print the preorder traversal of the new tree.

// Sample Input
// 7
// 20 30 40 50 60 70 80
// Sample Output
// 260 330 350 300 150 210 80
// Explanation
// The original tree looks like

//             50             
//         /        \                
//       30          70
//     /    \       /   \ 
//   20    40      60    80
// We are supposed to replace the elements by the sum of elements larger than it.
// 80 being the largest element remains unaffected .
// 70 being the second largest element gets updated to 150 (70+80)
// 60 becomes 210 (60 + 70 + 80)
// 50 becomes 260 (50 + 60 + 70 + 80)
// 40 becomes 300 (40 + 50 + 60 + 70 + 80)
// 30 becomes 330 (30 + 40 + 50 + 60 + 70 + 80)
// 20 becomes 350 (20 + 30 + 40 + 50 + 60 + 70 + 80)

// The new tree looks like

//            260             
//         /        \                
//      330         150
//     /    \       /   \ 
//   350    300   210    80
// The Pre-Order traversal (Root->Left->Right) looks like :
// 260 330 350 300 150 210 80.

#include<bits/stdc++.h>
using namespace std;
int temp;
class node{
	public:
	int data;
	node* left,*right;
	node(int d){
		data=d;
		left=right=NULL;
	}
};
node* bst(int *a,int start,int end){
	if(start>end)
	return NULL;

	int mid = start + (end-start)/2;
	node* root = new node(a[mid]);
	root->left = bst(a,start,mid-1);
	root->right = bst(a,mid+1,end);
	return root;
}
void update(node* root,int &sum){
	if(root==NULL)
	return ;

	// if(root->data == temp)
	// return root->data;

	update(root->right,sum);
	// root->data = rightSum + root->data;
	sum = sum+root->data;
	root->data = sum;
	update(root->left,sum);
}
void preorder(node* root){
	if(root==NULL)
	return;

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int main() {
	node *root = NULL;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i==n-1)
		temp = a[i];
	}

	root = bst(a,0,n-1);
	int sum=0;
	update(root,sum);
	preorder(root);
	return 0;
}