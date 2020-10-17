/* Leet Code */
/* Title - Power of Two */
/* Created By - Akash Modak */
/* Date - 17/10/2020 */

// Given an integer n, write a function to determine if it is a power of two.

 

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 2^0 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 2^4 = 16
// Example 3:

// Input: n = 3
// Output: false
// Example 4:

// Input: n = 4
// Output: true
// Example 5:

// Input: n = 5
// Output: false


class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<0)
            return false;
        int x = __builtin_popcount(n);
        if(x==1)
            return true;
        else
            return false;
    }
};