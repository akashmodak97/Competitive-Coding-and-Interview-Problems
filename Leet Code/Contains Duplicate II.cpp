/* Leet Code */
/* Title - Contains Duplicate II */
/* Created By - Akash Modak */
/* Date - 28/12/2020 */

// Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.

// Example 1:

// Input: nums = [1,2,3,1], k = 3
// Output: true
// Example 2:

// Input: nums = [1,0,1,1], k = 1
// Output: true
// Example 3:

// Input: nums = [1,2,3,1,2,3], k = 2
// Output: false

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]].size()>0){
                for(auto x: m[nums[i]]){
                    if(abs(x-i)<=k)
                        return true;
                }
            }
            m[nums[i]].push_back(i);
        }
        return false;
    }
};