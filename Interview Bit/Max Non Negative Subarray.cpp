/* Interview Bit */
/* Title - Max Non Negative Subarray */
/* Created By - Akash Modak */
/* Date - 26/06/2020 */

// Given an array of integers, A of length N, find out the maximum sum sub-array of non negative numbers from A.

// The sub-array should be contiguous i.e., a sub-array created by choosing the second and fourth element and skipping the third element is invalid.

// Maximum sub-array is defined in terms of the sum of the elements in the sub-array.

// Find and return the required subarray.

// NOTE:

// If there is a tie, then compare with segment's length and return segment which has maximum length.
// If there is still a tie, then return the segment with minimum starting index.


// Problem Constraints
// 1 <= N <= 105
// -109 <= A[i] <= 109



// Input Format
// The first and the only argument of input contains an integer array A, of length N.



// Output Format
// Return an array of integers, that is a subarray of A that satisfies the given conditions.



// Example Input
// Input 1:

//  A = [1, 2, 5, -7, 2, 3]
// Input 2:

//  A = [10, -1, 2, 3, -4, 100]


// Example Output
// Output 1:

//  [1, 2, 5]
// Output 2:

//  [100]


// Example Explanation
// Explanation 1:

//  The two sub-arrays are [1, 2, 5] [2, 3].
//  The answer is [1, 2, 5] as its sum is larger than [2, 3].
// Explanation 2:

//  The three sub-arrays are [10], [2, 3], [100].
//  The answer is [100] as its sum is larger than the other two.

vector<int> Solution::maxset(vector<int> &A) {
    int n=A.size();
    int i=0,maxm=0,count=0,start=0,end=-1;
    int fstart=-1,fend=-1;
    long long int sum=0,maxsum=0;
    vector<int> res;
    while(i<n){
        if(A[i]>=0){
            sum+=A[i];
            count++;
            end++;
        }
        if(sum>maxsum){
            maxsum=sum;
            fstart=start;
            fend=end;
        }
        else if(sum==maxsum&&count>maxm){
            maxm=count;
            fstart=start;
            fend=end;
        }
        if(A[i]<0){
            count=0;
            start=i+1;end=i;
            sum=0;
        }
        i++;
    }
    if(fstart!=-1&&fend!=-1){
        for(int i=fstart;i<=fend;i++)
         res.push_back(A[i]);
    }
    return res;
}
