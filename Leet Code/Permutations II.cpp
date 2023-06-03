/* Leet Code */
/* Title - Permutations II */
/* Created By - Akash Modak */
/* Date - 03/06/2023 */

// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

 

// Example 1:

// Input: nums = [1,1,2]
// Output:
// [[1,1,2],
//  [1,2,1],
//  [2,1,1]]
// Example 2:

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

class Solution {
public:
    void swap(vector<int> &nums, int i, int j) {
        int t=nums[i];
        nums[i]=nums[j];
        nums[j]=t;
    }
    void perm(vector<int> nums, int i, set<vector<int>> &s){
        if(i==nums.size()){
            s.insert(nums);
            return;
        }

        for(int j=i;j<nums.size();j++){
            swap(nums, i,j);
            perm(nums, i+1,s);
            swap(nums,i,j);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> st;
        perm(nums,0,st);
        vector<vector<int>> res(st.begin(),st.end());
        return res;
    }
};
