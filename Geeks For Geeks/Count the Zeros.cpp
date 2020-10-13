/* Geeks for Geeks */
/* Title - Count the Zeros */
/* Created By - Akash Modak */
/* Date - 13/10/2020 */

// Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

// Example 1:

// Input:
// N = 12
// Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
// Output: 3
// Explanation: There are 3 0's in the given array.

// Example 2:

// Input:
// N = 5
// Arr[] = {0, 0, 0, 0, 0}
// Output: 5
// Explanation: There are 5 0's in the array.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function countZeroes() which takes the array of integers arr[] and its size n as input parameters and returns the number of zeroes present in the array.


// Expected Time Complexity: O(logN)
// Expected Auxiliary Space: O(1)

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int binary(int arr[],int s,int e){
        
        if(s<=e){
            int mid = s+(e-s)/2;
            if(arr[mid]==0){
                if(mid>0){
                    int i = mid;
                    while(arr[i]==0 and i>=0){
                        i--;
                    }
                    return i+1;
                
                }
                return mid;
            }
            else if(arr[mid]==1)
            return binary(arr,mid+1,e);
        }
        return -1;
    }
    int countZeroes(int arr[], int n) {
        // code here
        int s = binary(arr,0,n-1);
        if(s==-1)
        return 0;
        else 
        return n-s;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends