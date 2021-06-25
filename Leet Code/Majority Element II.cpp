/* Leet Code */
/* Title - Majority Element II */
/* Created By - Akash Modak */
/* Date - 25/06/2020 */

// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

// Follow-up: Could you solve the problem in linear time and in O(1) space?

 

// Example 1:

// Input: nums = [3,2,3]
// Output: [3]
// Example 2:

// Input: nums = [1]
// Output: [1]
// Example 3:

// Input: nums = [1,2]
// Output: [1,2]

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==1){
            return vector<int>(1,nums[0]);
        }
        vector<int> res;
        int length = nums.size();
        int oneThird = length/3;
        int count = 1;
        sort(nums.begin(), nums.end());
        int currentElement = nums[0];
        for(int i=1;i<length;i++){
            if(currentElement != nums[i]){
                if(count > oneThird)
                {
                    res.push_back(currentElement);
                }
                count = 0;
            }
            currentElement = nums[i];
            count++;
        }
        if(count > oneThird)
        {
            res.push_back(currentElement); 
        }
        return res;
    }
};