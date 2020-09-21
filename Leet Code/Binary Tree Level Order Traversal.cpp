/* Leet Code */
/* Title - Binary Tree Level Order Traversal */
/* Created By - Akash Modak */
/* Date - 21/09/2020 */

// Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

// For example:
// Given binary tree [3,9,20,null,null,15,7],
//     3
//    / \
//   9  20
//     /  \
//    15   7
// return its level order traversal as:
// [
//   [3],
//   [9,20],
//   [15,7]
// ]

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > v;
        if(root==NULL)
            return v;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> vi(q.size());
            int i=0;
            int size = q.size();
            while(size--){
                TreeNode* temp = q.front();
                q.pop();
                vi[i++] = temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            v.push_back(vi);
        }
        return v;
    }
};