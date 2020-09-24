/* Leet Code */
/* Title - Longest Increasing Subsequence */
/* Created By - Akash Modak */
/* Date - 24/09/2020 */

// Given an unsorted array of integers, find the length of longest increasing subsequence.

// Example:

// Input: [10,9,2,5,3,7,101,18]
// Output: 4 
// Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4. 
// Note:

// There may be more than one LIS combination, it is only necessary for you to return the length.
// Your algorithm should run in O(n^2) complexity.

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int n = nums.size();
        int lis[n];
        for(int i=0;i<n;i++)
            lis[i]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] and lis[i]<lis[j]+1){
                    lis[i] = lis[j]+1;
                }
            }
        }
        int max = 0;
        for(int i=0;i<n;i++){
            if(max<lis[i])
                max=lis[i];
        }
        return max;
    }
};