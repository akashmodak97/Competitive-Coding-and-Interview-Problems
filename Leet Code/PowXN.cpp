/* Leet Code */
/* Title - Pow(x,n)  */
/* Created By - Akash Modak */
/* Date - 16/7/2020 */

// Implement pow(x, n), which calculates x raised to the power n (xn).

// Example 1:

// Input: 2.00000, 10
// Output: 1024.00000
// Example 2:

// Input: 2.10000, 3
// Output: 9.26100
// Example 3:

// Input: 2.00000, -2
// Output: 0.25000
// Explanation: 2-2 = 1/2^2 = 1/4 = 0.25
// Note:

// -100.0 < x < 100.0
// n is a 32-bit signed integer, within the range [−2^31, 2^31 − 1]

class Solution {
public:
    double power(double x, long long n){
        if(n==0)
            return 1.0;
        if(n%2==0)
        {
            double ans = power(x,n/2);
            return ans*ans;
        }
        else
            return x*power(x,n-1);
    }
    double myPow(double x, int n) {
        
        if(n<0)
            return 1/power(x,-1*(long long)n);
        return power(x,(long long)n);
    }
};