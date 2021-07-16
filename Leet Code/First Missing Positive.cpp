/* Leet Code */
/* Title - First Missing Positive */
/* Created By - Akash Modak */
/* Date - 16/07/2021 */

// Given an unsorted integer array nums, find the smallest missing positive integer.

// You must implement an algorithm that runs in O(n) time and uses constant extra space.

 

// Example 1:

// Input: nums = [1,2,0]
// Output: 3
// Example 2:

// Input: nums = [3,4,-1,1]
// Output: 2
// Example 3:

// Input: nums = [7,8,9,11,12]
// Output: 1


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==0)
            return 1;
        int n = nums.size();
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                nums[count++] = nums[i];
            }
        }
    
        for(int i=0;i<count;i++){
            if(abs(nums[i])-1<n && nums[abs(nums[i])-1]>0){
                nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
            }
        }
        
        for(int i=0;i<count;i++){
            if(nums[i]>0)
                return i+1;
        }
        return count+1;
    }
};