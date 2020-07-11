/* Leet Code */
/* Title - Subsets */
/* Created By - Akash Modak */
/* Date - 11/07/2020 */

// Given a set of distinct integers, nums, return all possible subsets (the power set).

// Note: The solution set must not contain duplicate subsets.

// Example:

// Input: nums = [1,2,3]
// Output:
// [
//   [3],
//   [1],
//   [2],
//   [1,2,3],
//   [1,3],
//   [2,3],
//   [1,2],
//   []
// ]

class Solution {
public:
    void fillPowerSet(vector<int>& nums,int i,int n,vector<vector<int>>& ans){
        if(i==n) return;  //n is end of nums array if we reach there return
        int v = nums[i];  // The current element we are looking at
        vector<vector<int>>t = ans;  // temp array to store the arrays for current element
        for(auto x: t){
            x.push_back(v);   // add the current element
            ans.push_back(x);  // insert it to ans array
        }
        fillPowerSet(nums,i+1,n,ans);  // go for the next element (i = i+1)
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int i = 0, n=nums.size();
        if(n==0) return {};  // if empty array
        vector<vector<int>>ans;
        ans.push_back({});
        fillPowerSet(nums,i,n,ans);
        return ans;
    }
};