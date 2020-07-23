/* Leet Code */
/* Title - Single Number III */
/* Created By - Akash Modak */
/* Date - 23/7/2020 */

// Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

// Example:

// Input:  [1,2,1,3,2,5]
// Output: [3,5]
// Note:

// The order of the result is not important. So in the above example, [5, 3] is also correct.
// Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
            x=x^nums[i];
        int temp=x;
        int pos=0;
        while((temp&1)==0){
            pos++;
            temp=temp>>1;
        }
        int mask = (1<<pos);
        int m=0;
        // cout<<mask;
        for(int i=0;i<n;i++){
            if((mask&nums[i])>0)
                m^=nums[i];
        }
        // cout<<m;
        vector<int> v;
        // cout<<x;
        v.push_back(m);
        v.push_back(x^m);
        return v;
    }
};