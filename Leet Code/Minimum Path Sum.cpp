/* Leet Code */
/* Title - Minimum Path Sum */
/* Created By - Akash Modak */
/* Date - 23/09/2020 */

// Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.

// Note: You can only move either down or right at any point in time.

// Example:

// Input:
// [
//   [1,3,1],
//   [1,5,1],
//   [4,2,1]
// ]
// Output: 7
// Explanation: Because the path 1→3→1→1→1 minimizes the sum.

class Solution {
public:
    
 
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size()==0)
            return 0;
        int m = grid.size();
        int n = grid[0].size();
        
        if(m==0 and n==0)
            return 0;
    
        int dp[m][n];
        dp[0][0] = grid[0][0];
        for(int i=1;i<m;i++)
            dp[i][0] = dp[i-1][0] + grid[i][0];
        for(int j=1;j<n;j++)
            dp[0][j] = dp[0][j-1] + grid[0][j];
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                int sum1 = dp[i-1][j] + grid[i][j];
                int sum2 = dp[i][j-1] + grid[i][j];
                dp[i][j] = min(sum1,sum2);
            }
        }
        return dp[m-1][n-1];
        
    }
};