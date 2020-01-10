/* Leet Code*/
/* Title - Two Sum */
//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
//Example:
//
//Given nums = [2, 7, 11, 15], target = 9,
//
//Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> hashmap;
        vector<int> output;
        for( int i=0;i<nums.size();i++ )
        {
            int secondEle = target - nums[i];
            hashmap.insert(pair<int,int>(nums[i],i));

            if(hashmap.find(secondEle)!=hashmap.end() && hashmap.find(secondEle)->second!=i)
            {
                output.push_back(hashmap.find(secondEle)->second);
                
                output.push_back(i);
                return output;
            }
        }
        return output;
    }
};
