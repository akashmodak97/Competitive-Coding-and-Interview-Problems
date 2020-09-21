/* Leet Code */
/* Title - Binary Tree Inorder Traversal */
/* Created By - Akash Modak */
/* Date - 21/09/2020 */

// Given the root of a binary tree, return the inorder traversal of its nodes' values.


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
    vector<int> v;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)
            return v;
        
        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);
        
        return v;
    }
};