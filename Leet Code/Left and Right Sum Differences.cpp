/* Leet Code */
/* Title - Left and Right Sum Differences */
/* Created By - Akash Modak */
/* Date - 02/05/2023 */

// Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

// answer.length == nums.length.
// answer[i] = |leftSum[i] - rightSum[i]|.
// Where:

// leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
// rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
// Return the array answer.

 

// Example 1:

// Input: nums = [10,4,8,3]
// Output: [15,1,11,22]
// Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
// The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
// Example 2:

// Input: nums = [1]
// Output: [0]
// Explanation: The array leftSum is [0] and the array rightSum is [0].
// The array answer is [|0 - 0|] = [0].

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> leftSum(nums.size()), rightSum(nums.size());
        vector<int> res;
        int n = nums.size();
        leftSum[0] = nums[0];
        rightSum[n-1] = nums[n-1];
        for(int i=1;i<n;i++) {
            leftSum[i] = leftSum[i-1] + nums[i];
            rightSum[n-1-i] = rightSum[n-i] +nums[n-1-i];
        }
        for(int i=0;i<nums.size();i++) {
            res.push_back(abs(leftSum[i]-rightSum[i]));
        }
        return res;
    }
};
