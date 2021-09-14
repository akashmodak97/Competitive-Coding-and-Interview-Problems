/* Leet Code */
/* Title - Balanced Binary Tree */
/* Created By - Akash Modak */
/* Date - 14/09/2021 */

// Given a binary tree, determine if it is height-balanced.

// For this problem, a height-balanced binary tree is defined as:

// a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

 

// Example 1:


// Input: root = [3,9,20,null,null,15,7]
// Output: true
// Example 2:


// Input: root = [1,2,2,3,3,null,null,4,4]
// Output: false
// Example 3:

// Input: root = []
// Output: true

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        int leftTree = height(root->left)+1;
        int rightTree = height(root->right)+1;
        
        return leftTree > rightTree ? leftTree : rightTree;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
      
        
        int leftTree = height(root->left);
        int rightTree = height(root->right);
        
    
        if(abs(leftTree - rightTree)< 2 && isBalanced(root->left) && isBalanced(root->right))
            return true;
        return false;
    }
};
