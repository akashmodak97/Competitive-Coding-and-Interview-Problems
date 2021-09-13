/* Leet Code */
/* Title - Maximum Absolute Sum of Any Subarray */
/* Created By - Akash Modak */
/* Date - 13/09/2021 */

// You are given an integer array nums. The absolute sum of a subarray [numsl, numsl+1, ..., numsr-1, numsr] is abs(numsl + numsl+1 + ... + numsr-1 + numsr).

// Return the maximum absolute sum of any (possibly empty) subarray of nums.

// Note that abs(x) is defined as follows:

// If x is a negative integer, then abs(x) = -x.
// If x is a non-negative integer, then abs(x) = x.
 

// Example 1:

// Input: nums = [1,-3,2,3,-4]
// Output: 5
// Explanation: The subarray [2,3] has absolute sum = abs(2+3) = abs(5) = 5.
// Example 2:

// Input: nums = [2,-5,1,-4,3,-2]
// Output: 8
// Explanation: The subarray [-5,1,-4] has absolute sum = abs(-5+1-4) = abs(-8) = 8.

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = INT_MIN, minSum = INT_MAX, currMax = 0, currMin = 0;
        for(int i=0;i<nums.size();i++){
            currMax+=nums[i];
            currMin+=nums[i];
            
            if(currMax > maxSum)
                maxSum = currMax;
            if(currMax<0)
                currMax = 0;
            
            if(currMin < minSum)
                minSum = currMin;
            
            if(currMin>0)
                currMin = 0;
        }
        
        return max(abs(minSum), maxSum);
    }
};