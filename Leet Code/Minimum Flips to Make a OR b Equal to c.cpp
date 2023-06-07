/* Leet Code */
/* Title - Minimum Flips to Make a OR b Equal to c */
/* Created By - Akash Modak */
/* Date - 26/7/2020 */

// Given 3 positives numbers a, b and c. Return the minimum flips required in some bits of a and b to make ( a OR b == c ). (bitwise OR operation).
// Flip operation consists of change any single bit 1 to 0 or change the bit 0 to 1 in their binary representation.

// Example 1:

// Input: a = 2, b = 6, c = 5
// Output: 3
// Explanation: After flips a = 1 , b = 4 , c = 5 such that (a OR b == c)
// Example 2:

// Input: a = 4, b = 2, c = 7
// Output: 1
// Example 3:

// Input: a = 1, b = 2, c = 3
// Output: 0

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int at, bt, ct,count=0;
        while(c!=0 || b!=0 || a!=0){
            at=a&1;
            bt=b&1;
            ct=c&1;
            a=a>>1;
            b=b>>1;
            c=c>>1;
            if(ct==1 and at!=bt) continue;
            else if(ct==0 and at!=bt) count++;        
            else if(ct==1 and at==0) count++;
            else if(ct==0 and at==1) count+=2;     
        }
        return count;
    }
};
