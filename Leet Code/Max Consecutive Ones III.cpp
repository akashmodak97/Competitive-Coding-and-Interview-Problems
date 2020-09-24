/* Leet Code */
/* Title - Max Consecutive Ones III */
/* Created By - Akash Modak */
/* Date - 25/09/2020 */

// Given an array A of 0s and 1s, we may change up to K values from 0 to 1.

// Return the length of the longest (contiguous) subarray that contains only 1s. 

 

// Example 1:

// Input: A = [1,1,1,0,0,0,1,1,1,1,0], K = 2
// Output: 6
// Explanation: 
// [1,1,1,0,0,1,1,1,1,1,1]
// Bolded numbers were flipped from 0 to 1.  The longest subarray is underlined.
// Example 2:

// Input: A = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], K = 3
// Output: 10
// Explanation: 
// [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
// Bolded numbers were flipped from 0 to 1.  The longest subarray is underlined.
 

// Note:

// 1 <= A.length <= 20000
// 0 <= K <= A.length
// A[i] is 0 or 1 

class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int c=0;
        int start = 0;
        int maxlen = 0;
        int maxcount = 0;
        for(int i=0;i<A.size();i++){
            if(A[i]==1){
                c++;
                maxcount=max(maxcount,c);
            }
            while(i-start-maxcount+1>K){
                if(A[start]==1)
                c--;
                start++;
            }
            maxlen = max(maxlen,i-start+1);
        }
        return maxlen;
    }
};