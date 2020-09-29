/* Leet Code */
/* Title - Count Good Nodes in Binary Tree */
/* Created By - Akash Modak */
/* Date - 29/09/2020 */

// Given a binary tree root, a node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X.

// Return the number of good nodes in the binary tree.

 

// Example 1:



// Input: root = [3,1,4,3,null,1,5]
// Output: 4
// Explanation: Nodes in blue are good.
// Root Node (3) is always a good node.
// Node 4 -> (3,4) is the maximum value in the path starting from the root.
// Node 5 -> (3,4,5) is the maximum value in the path
// Node 3 -> (3,1,3) is the maximum value in the path.
// Example 2:



// Input: root = [3,3,null,4,2]
// Output: 3
// Explanation: Node 2 -> (3, 3, 2) is not good, because "3" is higher than it.
// Example 3:

// Input: root = [1]
// Output: 1
// Explanation: Root is considered as good.


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
    TreeNode* prev;
    int count = 1;
    void good(TreeNode* root,int m){
        if(root==NULL)
            return ;
        // if(prev)
        //     cout<<root->val<<" "<<prev->val<<endl;
        if(prev and root->val>=m){
            m = root->val;
            count++;
        }
        prev = root;
        good(root->left,m);
        
        prev = root;
        
        
        good(root->right,m);
       
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        prev = NULL;
        int maxEle = root->val;
        good(root,maxEle);
        return count;
    }
};
