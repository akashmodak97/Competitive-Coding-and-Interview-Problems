/* Leet Code */
/* Title - Maximum Sub Array */

//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

//Example:
//
//Input: [-2,1,-3,4,-1,2,1,-5,4],
//Output: 6
//Explanation: [4,-1,2,1] has the largest sum = 6.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        int maxSum=INT_MIN;
        int currSum=0;
        for(int i=0;i<nums.size();i++)
        {
            currSum = currSum + nums[i];
            if( maxSum < currSum)
                maxSum = currSum;
            if( currSum < 0 )
                currSum = 0;
        }
        return maxSum;
    }
};
