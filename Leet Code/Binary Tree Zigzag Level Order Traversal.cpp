/* Leet Code */
/* Title - Binary Tree Zigzag Level Order Traversal */
/* Created By - Akash Modak */
/* Date - 22/7/2020 */

// Given a binary tree, return the zigzag level order traversal of its nodes' values. (ie, from left to right, then right to left for the next level and alternate between).

// For example:
// Given binary tree [3,9,20,null,null,15,7],
//     3
//    / \
//   9  20
//     /  \
//    15   7
// return its zigzag level order traversal as:
// [
//   [3],
//   [20,9],
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
            return vector<vector<int>> {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        
        TreeNode* current;
        bool flag = false;
        while(!q.empty()){
            
            vector<int> v;
            
            int size = q.size();
            while(size--){
                current = q.front();
                q.pop();
                if(current->left)
                    q.push(current->left);
                if(current->right)
                    q.push(current->right);
                v.push_back(current->val);
            }
            if(flag)
                reverse(v.begin(),v.end());
            flag=!flag;
            res.push_back(v);
        }
        return res;
    }
};