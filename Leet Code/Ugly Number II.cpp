/* Leet Code */
/* Title - Ugly Number II */
/* Created By - Akash Modak */
/* Date - 4/7/2020 */

// Write a program to find the n-th ugly number.

// Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. 

// Example:

// Input: n = 10
// Output: 12
// Explanation: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 is the sequence of the first 10 ugly numbers.
// Note:  

// 1 is typically treated as an ugly number.
// n does not exceed 1690.


class Solution {
public:
    int nthUglyNumber(int n) {
        int mul2=2,mul3=3,mul5=5,next=1;
        int i2=0,i3=0,i5=0;
        int a[n];
        a[0]=1;
        for(int i=1;i<n;i++){
            next=min(mul2,min(mul3,mul5));
            a[i]=next;
            // cout<<mul2<<" "<<mul3<<" "<<mul5<<endl;
            if(next==mul2){
                i2++;
                mul2 = a[i2]*2;
            }
            if(next==mul3){
                i3++;
                mul3=a[i3]*3;
            }
            if(next==mul5){
                i5++;
                mul5=a[i5]*5;
                
            }
               
        }
        return next;        
    }
};