/* Leet Code */
/* Title - Move Zeroes */
/* Created By - Akash Modak */
/* Date - 27/08/2020 */

// Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Example:

// Input: [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Note:

// You must do this in-place without making a copy of the array.
// Minimize the total number of operations.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int i,j=0;
        if(nums.empty())
            return;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j] = nums[i];
                j++;
            }else{
                count++;
            }
        }
        for(i=nums.size()-count;i<nums.size();i++){
            nums[i]=0;
        }
    }
};