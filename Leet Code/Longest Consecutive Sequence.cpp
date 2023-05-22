/* Leet Code */
/* Title - Longest Consecutive Sequence */
/* Created By - Akash Modak */
/* Date - 22/05/2023 */

// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int maxCount=0;
        for(int i=0;i<nums.size();i++) s.insert(nums[i]);
        for(int n: nums){
            if(s.find(n-1)==s.end()){
                int num=n;
                int count=1;
                while(s.find(num+1)!=s.end()){
                    num++;
                    count++;
                }
                maxCount=max(maxCount,count);
            }
        }
        return maxCount;
    }
};
