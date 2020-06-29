/* Leet Code */
/* Title - Move Zeroes */
/* Created By - Akash Modak */
/* Date - 29/06/2020 */

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
        int n = nums.size();
        int i=0,j=0;
        while(j<n){
            if(nums[j]==0)
                j++;
            else if(nums[i]==0){
                nums[i]=nums[j];
                if(i!=j){
                    nums[j]=0;
                    i++;
                }
                j++;
            }
            else{
                j++;
                i++;
            }

        }
    }
};