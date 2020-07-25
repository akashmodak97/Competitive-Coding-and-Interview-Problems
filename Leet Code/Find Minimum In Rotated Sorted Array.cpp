/* Leet Code */
/* Title - Find Minimum In Rotated Sprted Array */
/* Created By - Akash Modak */
/* Date - 25/7/2020 */

// Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

// (i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).

// Find the minimum element.

// You may assume no duplicate exists in the array.

// Example 1:

// Input: [3,4,5,1,2] 
// Output: 1
// Example 2:

// Input: [4,5,6,7,0,1,2]
// Output: 0

class Solution {
public:
    int findArr(vector<int> nums,int low, int high){
        if(low>high)
            return nums[0];
        if(high==low)
            return nums[low];
        
        int mid = low +(high-low)/2;
        if(mid<high and nums[mid+1]<nums[mid])
            return nums[mid+1];
        if(mid>low && nums[mid]<nums[mid-1])
            return nums[mid];
        if(nums[mid]<nums[high])
            return findArr(nums,low,mid-1);
        return findArr(nums,mid+1,high);
    }
    int findMin(vector<int>& nums) {
        int ans = findArr(nums,0,nums.size()-1);
        return ans;
    }
};