/* Leet Code */
/* Title - Find All Duplicates in an Array */
/* Created By - Akash Modak */
/* Date - 6/8/2020 */

// Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

// Find all the elements that appear twice in this array.

// Could you do it without extra space and in O(n) runtime?

// Example:
// Input:
// [4,3,2,7,8,2,3,1]

// Output:
// [2,3]

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(auto x: nums){
            m[x]++;
        }
        vector<int> v;
        for(auto x: m){
            if(x.second==2)
                v.push_back(x.first);
        }
        return v;
    }
};