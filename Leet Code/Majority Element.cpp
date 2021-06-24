/* Leet Code */
/* Title - Majority Element */
/* Created By - Akash Modak */
/* Date - 24/06/2021 */

// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        sort(nums.begin(), nums.end());
        int middleElement = nums.size()/2;
        return nums[middleElement];
        
    }
};