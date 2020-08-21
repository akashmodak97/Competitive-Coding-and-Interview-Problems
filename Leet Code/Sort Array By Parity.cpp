/* Leet Code */
/* Title - Sort Array By Parity */
/* Created By - Akash Modak */
/* Date - 21/8/2020 */

// Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.

// You may return any answer array that satisfies this condition.

 

// Example 1:

// Input: [3,1,2,4]
// Output: [2,4,3,1]
// The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
 

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        if(A.empty()){
            return vector<int>{};
        }
        vector<int> v;
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0)
            v.push_back(A[i]);
        }
        for(int i=0;i<A.size();i++){
            if(A[i]%2)
            v.push_back(A[i]);
        }
        
            return v;
    }
};
