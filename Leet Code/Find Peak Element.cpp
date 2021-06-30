/* Leet Code */
/* Title - Find Peak Element */
/* Created By - Akash Modak */
/* Date - 30/06/2021 */

// A peak element is an element that is strictly greater than its neighbors.

// Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -∞.

// You must write an algorithm that runs in O(log n) time.

 

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 2
// Explanation: 3 is a peak element and your function should return the index number 2.
// Example 2:

// Input: nums = [1,2,1,3,5,6,4]
// Output: 5
// Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            
            if(mid>0 and mid<nums.size()-1){
                if(nums[mid-1]<nums[mid] and nums[mid+1]<nums[mid])
                    return mid;
                else if(nums[mid-1]>nums[mid]){
                    high = mid-1;
                    cout<<mid<<'\n';
                }                    
                else if(nums[mid+1]>nums[mid])
                    low = mid+1;
                
            }
            else if(mid==0 and nums[mid]>nums[mid+1])
                return mid;
            else if(mid==0 and nums[mid]<nums[mid+1])
                return mid+1;
            else if(mid==nums.size()-1 and nums[mid]>nums[mid-1])
                return mid;
            else if(mid==nums.size()-1 and nums[mid]<nums[mid-1])
                return mid-1;
                
        }
        return -1;
    }
};