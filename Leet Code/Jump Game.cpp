/* Leet Code */
/* Title - Jump Game */
/* Created By - Akash Modak */
/* Date - 28/05/2023 */

// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

// Return true if you can reach the last index, or false otherwise.

 

// Example 1:

// Input: nums = [2,3,1,1,4]
// Output: true
// Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
// Example 2:

// Input: nums = [3,2,1,0,4]
// Output: false
// Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,0);
        dp[0]=nums[0];
        if(nums[0]==0 and nums.size()>1) return false;
        for(int i=1;i<nums.size();i++){
            if(dp[i-1]==i and nums[i]==0 and i!=nums.size()-1) return false;
            dp[i]=max(dp[i-1],i+nums[i]);
        }
        return true;
    }
};
