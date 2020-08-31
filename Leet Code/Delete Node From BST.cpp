/* Leet Code */
/* Title - Delet Node From BST */
/* Created By - Akash Modak */
/* Date - 31/08/2020 */

// Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.

// Basically, the deletion can be divided into two stages:

// Search for a node to remove.
// If the node is found, delete the node.
// Note: Time complexity should be O(height of tree).

// Example:

// root = [5,3,6,2,4,null,7]
// key = 3

//     5
//    / \
//   3   6
//  / \   \
// 2   4   7

// Given key to delete is 3. So we find the node with value 3 and delete it.

// One valid answer is [5,4,6,2,null,null,7], shown in the following BST.

//     5
//    / \
//   4   6
//  /     \
// 2       7

// Another valid answer is [5,2,6,null,4,null,7].

//     5
//    / \
//   2   6
//    \   \
//     4   7

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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return root;
        
        if(key<root->val){
            root->left = deleteNode(root->left,key);
            return root;
        }
        else if(key==root->val){
            if(root->left == NULL and root->right==NULL){
                
                delete root;
                return NULL;
            }
            else if(root->right!=NULL and root->left ==NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL and root->left!=NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            
            TreeNode* temp = root->right;
            while(temp->left!=NULL)
                temp = temp->left;
            root->val = temp->val;
            root->right = deleteNode(root->right,root->val);
            return root;
        }
        else
        {
            root->right = deleteNode(root->right,key);
            return root;
        }
        
 
    }
};