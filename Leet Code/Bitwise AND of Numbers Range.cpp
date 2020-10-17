/* Leet Code */
/* Title - Bitwise AND of Numbers Range */
/* Created By - Akash Modak */
/* Date - 17/10/2020 */

// Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

// Example 1:

// Input: [5,7]
// Output: 4
// Example 2:

// Input: [0,1]
// Output: 0

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m==0 or n==0)
            return 0;
        if(m==n)
            return m;
        int num1 = log2(m)+1;
        int num2 = log2(n)+1;
     
        if(num1==num2){
            if(m+1==n)
                return m&n;
            int x = m^n;
            int count = 0;
            while(num1--){
                if(x&1)
                    count = 0;
                else
                    count++;
                x = x>>1;
            }
            int ans = 0;
            int diff = num2 - count;
            while(count--){
                ans = ans<<1;
                ans = ans | 1;
            }
            ans = ans<<diff;
            return m&ans;
        }
        else
            return 0;
        
    }
};