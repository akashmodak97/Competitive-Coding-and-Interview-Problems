/* Leetcode */
/* Title - Summary Ranges */
/* Created By - Akash Modak */
/* Date - 01/12/2020 */

// You are given a sorted unique integer array nums.

// Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

// Each range [a,b] in the list should be output as:

// "a->b" if a != b
// "a" if a == b
 

// Example 1:

// Input: nums = [0,1,2,4,5,7]
// Output: ["0->2","4->5","7"]
// Explanation: The ranges are:
// [0,2] --> "0->2"
// [4,5] --> "4->5"
// [7,7] --> "7"
// Example 2:

// Input: nums = [0,2,3,4,6,8,9]
// Output: ["0","2->4","6","8->9"]
// Explanation: The ranges are:
// [0,0] --> "0"
// [2,4] --> "2->4"
// [6,6] --> "6"
// [8,9] --> "8->9"
// Example 3:

// Input: nums = []
// Output: []
// Example 4:

// Input: nums = [-1]
// Output: ["-1"]
// Example 5:

// Input: nums = [0]
// Output: ["0"]

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.empty())
            return vector<string>{};
        vector<string> result;
        if(nums.size()==1){
            int x = nums[0];
            result.push_back(to_string(x));
            return result;
        }
        
        int i=0,j;
        int x,start;
        for(;i<nums.size();i++){
            x = start = nums[i];
            
            j=i+1;
            while(j<nums.size() and x+1==nums[j]){
                x = nums[j];
                j++;
            }
            if(j!=i+1)
            i = j-1;
            if(start==x){
                result.push_back(to_string(x));
            }
            else{
                string s = to_string(start);
                s+="->";
                s+=to_string(x);
                result.push_back(s);
    
            }
            
        }
        
        return result;
        
    }
};