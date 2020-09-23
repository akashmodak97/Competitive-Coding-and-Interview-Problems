/* Leet Code */
/* Title - Unique Paths */
/* Created By - Akash Modak */
/* Date - 23/09/2020 */

// A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

// The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

// How many possible unique paths are there?

 

// Example 1:


// Input: m = 3, n = 7
// Output: 28
// Example 2:

// Input: m = 3, n = 2
// Output: 3
// Explanation:
// From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
// 1. Right -> Down -> Down
// 2. Down -> Down -> Right
// 3. Down -> Right -> Down
// Example 3:

// Input: m = 7, n = 3
// Output: 28
// Example 4:

// Input: m = 3, n = 3
// Output: 6

class Solution {
public:
    int unique(int i,int j,int m,int n,int dp[][105]){
        if(i>m || j>n)
            return 0;
        if(i==m and j==n)
            return 1;
        if(dp[i][j]!=0)
            return dp[i][j];
        
        int sum = 0;
        sum+=unique(i+1,j,m,n,dp);
        sum+=unique(i,j+1,m,n,dp);
        dp[i][j] = sum;
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        int dp[105][105]={0};
        return unique(1,1,m,n,dp);
    }
};