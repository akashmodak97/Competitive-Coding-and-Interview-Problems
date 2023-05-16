/* Leet Code */
/* Title - Convert an Array Into a 2D Array With Conditions */
/* Created By - Akash Modak */
/* Date - 17/05/2023 */

// You are given an integer array nums. You need to create a 2D array from nums satisfying the following conditions:

// The 2D array should contain only the elements of the array nums.
// Each row in the 2D array contains distinct integers.
// The number of rows in the 2D array should be minimal.
// Return the resulting array. If there are multiple answers, return any of them.

// Note that the 2D array can have a different number of elements on each row.

 

// Example 1:

// Input: nums = [1,3,4,1,2,3,1]
// Output: [[1,3,4,2],[1,3],[1]]
// Explanation: We can create a 2D array that contains the following rows:
// - 1,3,4,2
// - 1,3
// - 1
// All elements of nums were used, and each row of the 2D array contains distinct integers, so it is a valid answer.
// It can be shown that we cannot have less than 3 rows in a valid array.
// Example 2:

// Input: nums = [1,2,3,4]
// Output: [[4,3,2,1]]
// Explanation: All elements of the array are distinct, so we can keep all of them in the first row of the 2D array.

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        int i=0;
        auto it=mp.begin();
        vector<int> temp;
        while(i<nums.size()){
            temp.push_back(it->first);
            it->second--;
            auto t=it;
            it++;
            if(t->second==0) {
                mp.erase(t);   
            }   
            if(it==mp.end()) {
                it=mp.begin();
                res.push_back(temp);
                temp.clear();
            }
            i++;
        }
        return res;
    }
};
