/* Leet Code */
/* Title - Convert Sorted Array to Binary Search Tree */
/* Created By - Akash Modak */
/* Date - 22/09/2020 */

// Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

// For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

// Example:

// Given the sorted array: [-10,-3,0,5,9],

// One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:

//       0
//      / \
//    -3   9
//    /   /
//  -10  5

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
    TreeNode* create(vector<int> num,int start, int end){
        if(start>end)
            return NULL;
        int mid = start+(end-start)/2;
        TreeNode* root = new TreeNode(num[mid]);
        root->left = create(num,start,mid-1);
        root->right = create(num,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)
            return NULL;
        TreeNode *root = NULL;
        root = create(nums,0,nums.size()-1);
        return root;
    }
};