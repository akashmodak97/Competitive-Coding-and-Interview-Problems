/* Leet Code */
/* Title - Binary Tree Postorder Traversal */
/* Created By - Akash Modak */
/* Date - 21/09/2020 */

// Given the root of a binary tree, return the postorder traversal of its nodes' values.

// Follow up: Recursive solution is trivial, could you do it iteratively?


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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)
            return v;
        
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        v.push_back(root->val);
        
        return v;
    }
};  

