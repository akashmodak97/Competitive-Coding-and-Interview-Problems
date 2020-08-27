/* Hacker Blocks */
/* Title - Find Sum At Level K - Trees */
/* Created By - Akash Modak */
/* Date - 27/08/2020 */

// Take input of a generic tree using buildtree() function and also take input K the level at which we need to find the sum.

// Input Format
// Take a generic tree input where you are first given the data of the node and then its no of children. The input is of preorder form and it is assured that the no of children will not exceed 2. The input of the tree is followed by a single integer K.

// Constraints
// 1 <= Nodes in tree <=1000
// 1<K<10

// Output Format
// A single line containing the sum at level K.

// Sample Input
// 1 2
// 2 2
// 3 0
// 4 0
// 5 2
// 6 0
// 7 0
// 2
// Sample Output
// 20
// Explanation
// Here the tree looks like

//                      1                                 Level 0
//                 /          \
//               2              5                         Level 1
//            /      \       /     \
//           3       4      6        7                    Level 2
// Sum at Level 2 = 3 + 4 + 6 + 7 = 20


#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *left,*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
int sum=0;
node* buildTree(){
	int data,num;
	cin>>data>>num;
	node* root = new node(data);
	if(num==2){
		root->left=buildTree();
		root->right=buildTree();
	}
	if(num==1)
	root->left=buildTree();

	return root;
}
void kthsum(node* root,int level,int k){
	if(root==NULL)
	return ;
	if(level==k){
	sum+=root->data;
	return ;
	}
	kthsum(root->left,level+1,k);
	kthsum(root->right,level+1,k);
}
int main() {
	node* root = buildTree();
	int k;
	cin>>k;
	kthsum(root,0,k);
	cout<<sum<<endl;
	return 0;
}