/* Leet Code */
/* Title - Maximum Erasure Value */
/* Created By - Akash Modak */
/* Date - 14/06/2023 */

// You are given an array of positive integers nums and want to erase a subarray containing unique elements. The score you get by erasing the subarray is equal to the sum of its elements.

// Return the maximum score you can get by erasing exactly one subarray.

// An array b is called to be a subarray of a if it forms a contiguous subsequence of a, that is, if it is equal to a[l],a[l+1],...,a[r] for some (l,r).

 

// Example 1:

// Input: nums = [4,2,4,5,6]
// Output: 17
// Explanation: The optimal subarray here is [2,4,5,6].
// Example 2:

// Input: nums = [5,2,1,2,5,2,1,2,5]
// Output: 8
// Explanation: The optimal subarray here is [5,2,1] or [1,2,5].

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> s;
        int sum=0, maxSum=INT_MIN,start=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                maxSum=max(sum,maxSum);
                while(start<i) {
                    sum-=nums[start];
                    s.erase(nums[start]);
                    start++;
                    if(nums[start-1]==nums[i]) break;   
                }
            }
            s.insert(nums[i]);
            sum+=nums[i];
        }
        return maxSum<sum?sum:maxSum;
    }
};
