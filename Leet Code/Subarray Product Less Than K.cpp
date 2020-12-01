/* Leetcode */
/* Title - Subarray Product Less Than K */
/* Created By - Akash Modak */
/* Date - 01/12/2020 */

// Your are given an array of positive integers nums.

// Count and print the number of (contiguous) subarrays where the product of all the elements in the subarray is less than k.

// Example 1:
// Input: nums = [10, 5, 2, 6], k = 100
// Output: 8
// Explanation: The 8 subarrays that have product less than 100 are: [10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6].
// Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(nums.empty())
            return 0;
        else if(nums.size()==1){
            if(nums[0]<k)
                return 1;
            else 
                return 0;
        }
        
        int count = 0,start=0,i,mult=1;
        for(i=0;i<nums.size();i++){
            mult*=nums[i];
           
            if(mult>=k){
                while(mult>=k and start<nums.size()) {
                    mult/=nums[start++];
                }
                if(start==nums.size())
                    break;
            }
            count+=i-start+1;
        }
        return count;
            
    }
};