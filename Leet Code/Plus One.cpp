/* Leet Code */
/* Title - Plus One */

// Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

// The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

// You may assume the integer does not contain any leading zero, except the number 0 itself.

// Example 1:

// Input: [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Example 2:

// Input: [4,3,2,1]
// Output: [4,3,2,2]
// Explanation: The array represents the integer 4321.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 0;
        int temp = digits[n-1]+1;
        digits[n-1] = temp%10;
        carry = temp/10;
        for(int i=n-2;i>=0;i--){
            int temp = digits[i]+carry;
            digits[i] = temp%10;
            carry = temp/10;
        }
        if(carry)
            digits.insert(digits.begin(),carry);
        return digits;
    }
};