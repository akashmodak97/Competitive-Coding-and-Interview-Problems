/* Geeks for Geeks */
/* Title - Minimum number to form the sum even */
/* Created By - Akash Modak */
/* Date - 13/10/2020 */

// Given an array arr[] of size N, the task is to add the minimum number(should be greater than 0) to the array so that the sum of the array becomes even

 

// Example 1:

// Input: N = 8
// arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
// Output:  2
// Explanation:  Sum of array is 36, so 
// we add minimum number 2 to make the 
// sum even.

// Example 2:

// Input: N = 9
// arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}
// Output:  1
 

// Your Task:
// This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function minNum() that takes array A and integer N as parameters and returns the minimum number required to the array so that the sum becomes even.

 

// Expected Time Complexity: O(N). 
// Expected Auxiliary Space: O(1).

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{


	public:
	int minNum(long long int arr[],int n)
	{
	    // Your code goes here
	    long long int sum = 0;
	    int i;
	    for(i=0;i<n;i++)
	    sum+=arr[i];
	    if(sum%2==0)
	    return 2;
	    else 
	    return 1;
	    
	}

		 

};
	

// { Driver Code Starts.


int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	 int n;
        cin>>n;
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        
        
      
        Solution ob;
		cout << ob.minNum(a, n);
        
	    cout << "\n";
	     
    }
    return 0;
}

  

