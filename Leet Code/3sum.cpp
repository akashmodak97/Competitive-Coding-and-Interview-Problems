/* Leet Code */
/* Title - 3Sum */
// Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

// Note:

// The solution set must not contain duplicate triplets.

// Example:

// Given array nums = [-1, 0, 1, 2, -1, -4],

// A solution set is:
// [
//   [-1, 0, 1],
//   [-1, -1, 2]
// ]

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        if(nums.size()<3)
            return v;
        int i,j,k;
        
        sort(nums.begin(),nums.end());
        
        for(i = 0;i<nums.size()-2;i++){
            j=i+1;
            k=nums.size()-1;
            if(nums[i]>0)
                break;
            if(i>0 && nums[i]==nums[i-1])
                continue;
            while(j<k){
                if(nums[j]+nums[i]>0)
                    break;
                if(j>i+1 && nums[j]==nums[j-1])
                {
                    j++;
                    continue;
                }

                if(nums[i]+nums[j]+nums[k]>0)
                    k--;
                else if(nums[i]+nums[j]+nums[k]<0)
                    j++;
                else{
                    v.push_back(vector<int>{nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }
            
        }
        return v;
    }
    
};