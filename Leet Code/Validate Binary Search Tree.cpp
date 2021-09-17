/* Leet Code */
/* Title - Validate Binary Search Tree */
/* Created By - Akash Modak */
/* Date - 17/09/2021 */

// Given the root of a binary tree, determine if it is a valid binary search tree (BST).

// A valid BST is defined as follows:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.
 

// Example 1:


// Input: root = [2,1,3]
// Output: true
// Example 2:


// Input: root = [5,1,4,null,null,3,6]
// Output: false
// Explanation: The root node's value is 5 but its right child's value is 4.


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
    bool isBST(TreeNode* root, TreeNode* l = NULL, TreeNode* r = NULL){
        if(root==NULL)
            return true;
        
        if(l!=NULL and root->val <= l->val)
            return false;
        
        if(r!=NULL and root->val >= r->val)
            return false;
        
        return isBST(root->left, l, root) && isBST(root->right, root, r);
    }
    bool isValidBST(TreeNode* root) {
        return isBST(root, NULL, NULL);
    }
};