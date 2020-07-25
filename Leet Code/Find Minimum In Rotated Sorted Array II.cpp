/* Leet Code */
/* Title - Find Minimum In Rotated Sprted Array II */
/* Created By - Akash Modak */
/* Date - 25/7/2020 */

// Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

// (i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).

// Find the minimum element.

// The array may contain duplicates.

// Example 1:

// Input: [1,3,5]
// Output: 1
// Example 2:

// Input: [2,2,2,0,1]
// Output: 0
// Note:

// This is a follow up problem to Find Minimum in Rotated Sorted Array.
// Would allow duplicates affect the run-time complexity? How and why?

class Solution {
public:

    int findMin(vector<int>& nums) {
        // int ans = findArr(nums,0,nums.size()-1);
        int low=0;
        int high = nums.size()-1;
        while(low<high){
            // cout<<low<<endl;
            int mid=low+(high-low)/2;
            // cout<<mid<<endl;
            if(nums[mid]==nums[high])
                high--;
            else if(nums[mid]<=nums[high])
                high=mid;
            else{
                low=mid+1;
            }
        }
        return nums[high];
    }
};