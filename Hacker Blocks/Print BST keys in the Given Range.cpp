/* Hacker Blocks */
/* Title - Print BST keys in the Given Range*/
/* Created By - Akash Modak */
/* Date - 27/08/2020 */

// You are given an array of integers. First of all , You have to form a binary search tree from given integers. Now you have provided two integers k1 and k2. You have to print all nodes of BST within the range k1 and k2 (including k1 and k2).

// Input Format
// First line contains integer t as number of test cases. Each test case contains three lines. First line contains an integer n which is length of the array and second line contains n space separated integer. Third line contains the value of k1 and k2.

// Constraints
// 1 < t < 20
// 1 < n < 50

// Output Format
// For each test case you have to print preorder traversal of the tree first and then print all nodes within the range k1 and k2 (inclusive). Refer to the sample testcase for exact output format.

// Sample Input
// 1
// 5
// 4 3 2 5 6
// 3 5
// Sample Output
// # Preorder : 4 3 2 5 6 
// # Nodes within range are : 3 4 5 
// Explanation
// The tree looks like

//              4
//           /      \
//        3           5
//     /                \
//    2                  6
// The nodes between the range 3 to 5 are 3,4,5.


#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *left,*right;
	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};
node* build(node* root,int data){
	if(root==NULL){
		return new node(data);
	}
	if(data<=root->data)
	root->left = build(root->left,data);
	else
	root->right = build(root->right,data);

	return root;
}
void preorder(node *root){
	if(root==NULL)
	return;

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void printRange(node* root,int low, int high){
	if(root==NULL)
	return;

	printRange(root->left,low,high);
	if(root->data >= low && root->data <= high)
	cout<<root->data<<" ";
	printRange(root->right,low,high);
	return ;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		node *root=NULL;
		while(n--){
			int d;
			cin>>d;
			root=build(root,d);
		}
		int low,high;
		cin>>low>>high;
		cout<<"# Preorder : ";
		preorder(root);
		cout<<endl;
		cout<<"# Nodes within range are : ";
		printRange(root,low,high);
		cout<<endl;

	}
	return 0;
}