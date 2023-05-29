/* Leet Code */
/* Title - House Robber */
/* Created By - Akash Modak */
/* Date - 28/05/2023 */

// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

 

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.
// Example 2:

// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.

class Solution {
public:
    int topDown(vector<int> nums, int i, vector<int> &dp){
        if(i==0) return nums[0];
        if(i<0) return 0;

        if(dp[i]!=-1) return dp[i];
        int pick=nums[i]+topDown(nums, i-2, dp);
        int notPick=topDown(nums, i-1, dp);

        return dp[i]=max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return topDown(nums, nums.size()-1, dp);
    }
};
