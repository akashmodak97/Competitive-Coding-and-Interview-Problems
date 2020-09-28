/* Leet Code */
/* Title - Recover Binary Search Tree */
/* Created By - Akash Modak */
/* Date - 29/09/2020 */

// Two elements of a binary search tree (BST) are swapped by mistake.

// Recover the tree without changing its structure.

// Example 1:

// Input: [1,3,null,null,2]

//    1
//   /
//  3
//   \
//    2

// Output: [3,1,null,null,2]

//    3
//   /
//  1
//   \
//    2
// Example 2:

// Input: [3,1,4,null,null,2]

//   3
//  / \
// 1   4
//    /
//   2

// Output: [2,1,4,null,null,3]

//   2
//  / \
// 1   4
//    /
//   3
// Follow up:

// A solution using O(n) space is pretty straight forward.
// Could you devise a constant space solution?

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
    TreeNode *prev,*temp1,*temp2;
    bool flag = false;
    void recover(TreeNode* root){
        if(root==NULL)
            return ;
        recover(root->left);
        
        if(prev and !temp1 and root->val<prev->val)
            temp1 = prev;
        
        if(prev and temp1 and root->val<prev->val)
            temp2 = root;
        
        prev = root;
        // cout<<prev->val<<" ";
        recover(root->right);
    }
    void recoverTree(TreeNode* root) {
        if(root==NULL)
            return ;
        temp1 = NULL;
        temp2 = NULL;
        prev = NULL;
        recover(root);
        swap(temp1->val,temp2->val);
        return ;
    }
};