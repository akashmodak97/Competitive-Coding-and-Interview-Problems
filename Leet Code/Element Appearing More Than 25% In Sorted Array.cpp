/* Leet Code */
/* Title - Element Appearing More Than 25% In Sorted Array */
/* Created By - Akash Modak */
/* Date - 30/09/2020 */

// Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time.

// Return that integer.

 

// Example 1:

// Input: arr = [1,2,2,6,6,6,6,7,10]
// Output: 6
 

// Constraints:

// 1 <= arr.length <= 10^4
// 0 <= arr[i] <= 10^5

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> m;
        if(arr.size()==0)
            return 0;
        float avg = arr.size()/4;
        int ans = 0;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
            if(m[arr[i]]>avg)
                return ans = arr[i];
        }
        return ans;
    }
};