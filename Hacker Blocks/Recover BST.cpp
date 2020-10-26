/* Hacker Blocks */
/* Title -  Recover BST */
/* Created By - Akash Modak */
/* Date - 26/10/2020 */


// Two elements of a binary search tree (BST) are swapped by mistake. Tell us the 2 values swapping which the tree will be restored.

// Input Format
// First line contains n denoting the input size.
// Next line contains n space separated integers denoting the preorder input of the tree.

// NOTE : -1 indicates that the node does not exist.

// Constraints
// 1 <= n <= 10^5
// Your recovery algorithm should work in O(n) time.

// Output Format
// Print the two integers in space separated manner. The output should be sorted.

// Sample Input
// 3 2 1 -1 -1 -1 5 6 4 -1 -1 -1 -1 
// Sample Output
// 5 6
// Explanation
// The tree looks like

//              3
//           /      \
//        2           5
//     /            /    
//    1           6      
//              /
//            4  
// Swapping 5 and 6 makes the tree a BST.

#include <bits/stdc++.h>
using namespace std;
vector<int> v;
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
    
    if(d==-1){
        return NULL;
    }
    node* root = new node(d);
    root->left = build();
    root->right = build();
    return root;
}
void inorder(node* root){
    if(root==NULL)
    return;

    inorder(root->left);
    v.push_back(root->data);
    inorder(root->right);
}
pair<int,int> checkSwap(){
    int x=-1,y=-1,i;
    for(i=0;i<v.size()-1;i++){
        if(v[i+1]<v[i]){
            y=v[i+1];
            if(x==-1)
            x=v[i];
        }
    }
    return {x,y};
}
int main() {
    /* code here */
    node* root = build();
    inorder(root);
    pair<int,int> p = checkSwap();
    cout<<min(p.first,p.second)<<" "<<max(p.first,p.second)<<endl;
    return 0;
}