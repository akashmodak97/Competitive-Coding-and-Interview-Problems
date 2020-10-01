/* Leet Code */
/* Title - Search in Rotated Sorted Array */
/* Created By - Akash Modak */
/* Date - 01/10/2020 */

// You are given an integer array nums sorted in ascending order, and an integer target.

// Suppose that nums is rotated at some pivot unknown to you beforehand (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

// If target is found in the array return its index, otherwise, return -1.

 

// Example 1:

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Example 2:

// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1
// Example 3:

// Input: nums = [1], target = 0
// Output: -1

class Solution {
public:
  
    int search(vector<int>& nums, int target) {
       int n = nums.size();
        if(n==0)
            return -1;
        int low = 0;
        int high = n - 1;
        int first = nums[0];
        while(low<=high){
            int mid = low+(high-low)/2;
            if(target == nums[mid])
                return mid;
            
            int val = nums[mid];
            bool cond1 = val>=first;
            bool cond2 = target >=first;
            if( cond1==cond2 ){
                if(val<target)
                    low = mid+1;
                else 
                    high = mid-1;
            }
            else{
                if(val>=first){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};