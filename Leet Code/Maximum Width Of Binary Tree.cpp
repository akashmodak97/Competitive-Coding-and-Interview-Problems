/* Leet Code */
/* Title - Maximum Width Of Binary Tree */
/* Created By - Akash Modak */
/* Date - 9/7/2020 */

// Given a binary tree, write a function to get the maximum width of the given tree. The width of a tree is the maximum width among all levels. The binary tree has the same structure as a full binary tree, but some nodes are null.

// The width of one level is defined as the length between the end-nodes (the leftmost and right most non-null nodes in the level, where the null nodes between the end-nodes are also counted into the length calculation.

// Example 1:

// Input: 

//            1
//          /   \
//         3     2
//        / \     \  
//       5   3     9 

// Output: 4
// Explanation: The maximum width existing in the third level with the length 4 (5,3,null,9).
// Example 2:

// Input: 

//           1
//          /  
//         3    
//        / \       
//       5   3     

// Output: 2
// Explanation: The maximum width existing in the third level with the length 2 (5,3).
// Example 3:

// Input: 

//           1
//          / \
//         3   2 
//        /        
//       5      

// Output: 2
// Explanation: The maximum width existing in the second level with the length 2 (3,2).
// Example 4:

// Input: 

//           1
//          / \
//         3   2
//        /     \  
//       5       9 
//      /         \
//     6           7
// Output: 8
// Explanation:The maximum width existing in the fourth level with the length 8 (6,null,null,null,null,null,null,7).

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
    int widthOfBinaryTree(TreeNode* root) {
         if (root == NULL) 
        return 0; 

    int result = 0; 
  
   
    queue<pair<TreeNode*,int>> q; 
    q.push(make_pair(root,1));
    while (!q.empty()) 
    { 
        // Get the size of queue when the level order 
        // traversal for one level finishes 
        int count = q.size() ; 
  result=max(result,(q.back().second-q.front().second)+1);
        while (count--) 
        { 
            // Dequeue an node from queue 
            pair<TreeNode*,int>temp = q.front(); 
            q.pop(); 
       
            if (temp.first->left != NULL) 
            {q.push(make_pair(temp.first->left,2*(long)temp.second)); }
           
            if (temp.first->right != NULL) 
            { q.push(make_pair(temp.first->right,2*(long)temp.second+1)); }
        
    } 
 
        
    }
        return result;
    }
};