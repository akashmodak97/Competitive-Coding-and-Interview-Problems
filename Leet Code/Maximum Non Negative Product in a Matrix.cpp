/* Leet Code */
/* Title - Maximum Non Negative Product in a Matrix */
/* Created By - Akash Modak */
/* Date - 25/09/2020 */

// You are given a rows x cols matrix grid. Initially, you are located at the top-left corner (0, 0), and in each step, you can only move right or down in the matrix.

// Among all possible paths starting from the top-left corner (0, 0) and ending in the bottom-right corner (rows - 1, cols - 1), find the path with the maximum non-negative product. The product of a path is the product of all integers in the grid cells visited along the path.

// Return the maximum non-negative product modulo 109 + 7. If the maximum product is negative return -1.

// Notice that the modulo is performed after getting the maximum product.

//  Example 1:

// Input: grid = [[-1,-2,-3],
//                [-2,-3,-3],
//                [-3,-3,-2]]
// Output: -1
// Explanation: It's not possible to get non-negative product in the path from (0, 0) to (2, 2), so return -1.
// Example 2:

// Input: grid = [[1,-2,1],
//                [1,-2,1],
//                [3,-4,1]]
// Output: 8
// Explanation: Maximum non-negative product is in bold (1 * 1 * -2 * -4 * 1 = 8).
// Example 3:

// Input: grid = [[1, 3],
//                [0,-4]]
// Output: 0
// Explanation: Maximum non-negative product is in bold (1 * 0 * -4 = 0).
// Example 4:

// Input: grid = [[ 1, 4,4,0],
//                [-2, 0,0,1],
//                [ 1,-1,1,1]]
// Output: 2
// Explanation: Maximum non-negative product is in bold (1 * -2 * 1 * -1 * 1 * 1 = 2).
//  

class Solution {
public:
    // #define MOD 100000007
    
    int maxProductPath(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int MOD = 1e9+7;
        if(n==0)
            return -1;
        vector<vector<pair<long,long>> > dp;
        for(int i=0;i<n;i++){
            vector<pair<long,long>> v;
            for(int j=0;j<m;j++)
                v.push_back({1,1});
            dp.push_back(v);
        }
        dp[0][0] = {grid[0][0],grid[0][0]};
        for(int i=1;i<n;i++){
            long temp1 = min(dp[i-1][0].first,dp[i-1][0].second)*grid[i][0];
            long temp2 = max(dp[i-1][0].first,dp[i-1][0].second)*grid[i][0];
            dp[i][0] = {temp1,temp2};
        }
        for(int j=1;j<m;j++){
            long temp1 = min(dp[0][j-1].first,dp[0][j-1].second)*grid[0][j];
            long temp2 = max(dp[0][j-1].first,dp[0][j-1].second)*grid[0][j];

            dp[0][j] = {temp1,temp2};
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                long x = grid[i][j];
                long op1 = dp[i-1][j].first;
                long op2 = dp[i-1][j].second;
                long op3 = dp[i][j-1].first;
                long op4 = dp[i][j-1].second;
                long minval = min(op1,min(op2,min(op3,op4)))*x;
                long maxval = max(op1,max(op2,max(op3,op4)))*x;
                dp[i][j] = {minval,maxval};
            }
        }
        if(max(dp[n-1][m-1].second,dp[n-1][m-1].first)%MOD<0)
            return -1;
        else 
            return max(dp[n-1][m-1].second,dp[n-1][m-1].first)%MOD;
       
    }
};