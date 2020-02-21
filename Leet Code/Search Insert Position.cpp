/*Leet Code*/
/*Title - Search Insert Position*/
//Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
//
//You may assume no duplicates in the array.
//
//Example 1:
//
//Input: [1,3,5,6], 5
//Output: 2
//Example 2:
//
//Input: [1,3,5,6], 2
//Output: 1


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos=0,i=0;
        while(i<nums.size())
        {
            if(target>nums[i])
                pos++;
            else if(target==nums[i])
                return pos;
            i++;
        }
        return pos;
    }
};
