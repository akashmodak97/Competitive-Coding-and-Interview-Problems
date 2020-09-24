/* Leet Code */
/* Title - Product of Array Except Self */
/* Created By - Akash Modak */
/* Date - 24/09/2020 */

// Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

// Example:

// Input:  [1,2,3,4]
// Output: [24,12,8,6]
// Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.

// Note: Please solve it without division and in O(n).

// Follow up:
// Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
            return nums;
        
        int left=1,right=1;
        vector<int> res(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            res[i]*=left;
            left*=nums[i];
            res[nums.size()-i-1]*=right;
            right*=nums[nums.size()-i-1];
        }
        return res;
        
    }
};