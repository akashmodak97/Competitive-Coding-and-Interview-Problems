/* Leet Code */
/* Title - Construct Binary Tree from Preorder and Inorder Traversal */
/* Created By - Akash Modak */
/* Date - 29/09/2020 */

// Given preorder and inorder traversal of a tree, construct the binary tree.

// Note:
// You may assume that duplicates do not exist in the tree.

// For example, given

// preorder = [3,9,20,15,7]
// inorder = [9,3,15,20,7]
// Return the following binary tree:

//     3
//    / \
//   9  20
//     /  \
//    15   7

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
    int search(vector<int> p,int t,int start,int end){
        int ans = 0;
        for(int i=start;i<=end;i++){
            if(p[i]==t){
                return ans = i;
            }
        }
        return ans;
    }
    TreeNode* create(vector<int> p, vector<int> inorder,int start,int end,int &pre){
        if(start>end)
            return NULL;
        TreeNode* node = new TreeNode(p[pre]);
      
        int s = search(inorder,p[pre],start,end);
        pre++;
        node->left = create(p,inorder,start,s-1,pre);
        node->right = create(p,inorder,s+1,end,pre);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0)
            return NULL;
        int pre = 0;
        return create(preorder,inorder,0,preorder.size()-1,pre);
    }
};