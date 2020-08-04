/* Leet Code */
/* Title - Power of Four */
/* Created By - Akash Modak */
/* Date - 4/8/2020 */

// Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

// Example 1:

// Input: 16
// Output: true
// Example 2:

// Input: 5
// Output: false
// Follow up: Could you solve it without loops/recursion?

class Solution {
public:
    bool isPowerOfFour(long long int num) {
        if(num==1)
            return true;
        if(num<=0)
            return false;
        int setBits = __builtin_popcount(num);
        int numOfDigits = floor(log2(num))+1;
        // cout<<numOfDigits<<" "<<setBits;
        int numOfZeros = numOfDigits - setBits;
        if(setBits==1 && numOfZeros%2==0){
            return true;
        }
        else 
            return false;
    }
};