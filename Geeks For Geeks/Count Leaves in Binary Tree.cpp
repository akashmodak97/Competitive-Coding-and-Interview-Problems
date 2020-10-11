/* Geeks for Geeks */
/* Title - Count Leaves in Binary Tree */
/* Created By - Akash Modak */
/* Date - 11/10/2020 */

// Given a Binary Tree of size N , You have to count leaves in it. For example, there are two leaves in following tree

//         1
//      /      \
//    10      39
//   /
// 5

// Input:
// First line of input contains the number of test cases T. For each test case, there will be only a single line of input which is a string representing the tree as described below: 

// The values in the string are in the order of level order traversal of the tree where, numbers denote node values, and a character “N” denotes NULL child.

// For example:

// For the above tree, the string will be: 1 2 3 N N 4 6 N 5 N N 7 N

// Output:
// For each test case print the count of leaves.
// Your Task:
// You don't have to take input. Complete the function countLeaves() that takes root node of given tree as parameter and returns the count of leaves in tree . The printing is done by the driver code.
// Constraints:
// 1<= T <= 30
// 1<= N <= 104
// Example:
// Input:
// 2
// 3 4 2 
// 4 8 10 7 N 5 1 3 
// Output:
// 2
// 3
// Explanation:
// Test Case 2:  Given Tree is 
//                                  4
//                                /     \
//                             8       10
//                           /          /      \
//                        7          5        1
//                       /
//                      3
// Three leaves are 3 , 5 and 1.

// Note:The Input/Ouput format and Example given below is used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console, and should not print anything on stdout/console. The task is to complete the function specified, and not to write the full code.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}
int countLeaves(struct Node* root);

int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
		cout<< countLeaves(root)<<endl;
    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
int countLeaves(Node* root)
{
  // Your code here
  if(root==NULL)
  return 0;
  
  if(root->left==NULL and root->right==NULL)
  return 1;
  int l = countLeaves(root->left);
  int r = countLeaves(root->right);
  return l+r;
}
