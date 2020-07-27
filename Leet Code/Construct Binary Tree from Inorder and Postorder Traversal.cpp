/* Leet Code */
/* Title - Construct Binary Tree from Inorder and Postorder Traversal */
/* Created By - Akash Modak */
/* Date - 27/7/2020 */

// Given inorder and postorder traversal of a tree, construct the binary tree.

// Note:
// You may assume that duplicates do not exist in the tree.

// For example, given

// inorder = [9,3,15,20,7]
// postorder = [9,15,7,20,3]
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
    int search(vector<int> inorder,int start, int end,int val){
        int i = start;
        for(;i<=end;i++)
            if(inorder[i]==val)
                break;
        return i;
    }
    TreeNode* construct(vector<int> inorder,vector<int> postorder,int iStart,int iEnd,int* post){
        if(iStart>iEnd)
            return NULL;
        TreeNode* node = new TreeNode(postorder[*post]);
        --*post;
        int i = search(inorder,iStart,iEnd,node->val);
        if(iStart==iEnd)
            return node;
        
        node->right = construct(inorder,postorder,i+1,iEnd,post);
        node->left = construct(inorder,postorder,iStart,i-1,post);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size()-1;
        return construct(inorder,postorder,0,n,&n);
    }
};