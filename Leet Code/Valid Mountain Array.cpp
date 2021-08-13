/* Leet Code */
/* Title - Valid Mountain Array */
/* Created By - Akash Modak */
/* Date - 14/08/2021 */

// Given an array of integers arr, return true if and only if it is a valid mountain array.

// Recall that arr is a mountain array if and only if:

// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

 

// Example 1:

// Input: arr = [2,1]
// Output: false
// Example 2:

// Input: arr = [3,5,5]
// Output: false
// Example 3:

// Input: arr = [0,3,2,1]
// Output: true

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool increasing = false;
        bool decreasing = false;
        if(arr.size()<3)
            return false;
        int i=0;
        bool flag = false;
        while(i<arr.size()-1 and arr[i]<arr[i+1]){
            flag = true;
            i++;
        }
        
        if(i==arr.size()-1)
            return false;
        
        while(i<arr.size()-1 and arr[i]>arr[i+1] and flag){
            i++;
        }
        
        if(i!=arr.size()-1)
            return false;
        
        return true;
    }
};