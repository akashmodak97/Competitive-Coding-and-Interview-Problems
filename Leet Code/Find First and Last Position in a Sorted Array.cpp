/* Leet Code */
/* Title - Find First and Last Position of Element in Sorted Array */
/* Created By - Akash Modak */
/* Date - 21/09/2020 */

// Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

// Your algorithm's runtime complexity must be in the order of O(log n).

// If the target is not found in the array, return [-1, -1].

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
 

// Constraints:

// 0 <= nums.length <= 10^5
// -10^9 <= nums[i] <= 10^9
// nums is a non decreasing array.
// -10^9 <= target <= 10^9

class Solution {
public:
    pair<int,int> binary(vector<int> a,int s,int e,int k){
        if(s>e)
            return {-1,-1};
        if(s<=e){
            int mid = s+(e-s)/2; 
            if(a[mid]==k){
                int count =0;
                int temp = mid;
                if(mid-1>=0 and a[mid-1]==a[mid]){
                    for(int i=mid;i>=1;i--){
                        if(a[i]!=a[i-1])
                            break;
                        temp--;
                    }
                }
                for(int i=mid;i<a.size()-1;i++){
                    if(a[i]!=a[i+1])
                        break;
                    count++; 
                }
                return {temp,mid+count};
            }
                
            else if(a[mid]>k)
                return binary(a,s,mid-1,k);
            else
                return binary(a,mid+1,e,k);
                
        }
        return {-1,-1};
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
            return vector<int>{-1,-1};
        pair<int,int> i = binary(nums,0,nums.size()-1,target);
        return vector<int>{i.first,i.second};
    }
};