/* Leet Code */
/* Title - Same Tree */
/* Created By - Akash Modak */
/* Date - 13/07/2020 */

// Given two binary trees, write a function to check if they are the same or not.

// Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

// Example 1:

// Input:     1         1
//           / \       / \
//          2   3     2   3

//         [1,2,3],   [1,2,3]

// Output: true
// Example 2:

// Input:     1         1
//           /           \
//          2             2

//         [1,2],     [1,null,2]

// Output: false
// Example 3:

// Input:     1         1
//           / \       / \
//          2   1     1   2

//         [1,2,1],   [1,1,2]

// Output: false

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
    
    void dfs(TreeNode* p,vector<int>& v){
        if(p==NULL){
            return;
        }
        if(p->left==NULL && p->right!=NULL)
            v.push_back(INT_MIN);
        v.push_back(p->val);
        dfs(p->left,v);
        dfs(p->right,v);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1,v2;
        dfs(p,v1);
        dfs(q,v2);
       
        if(v1==v2)
            return true ;
        else
            return false;
    }
};