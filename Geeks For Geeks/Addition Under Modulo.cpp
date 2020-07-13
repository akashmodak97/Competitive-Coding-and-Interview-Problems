/* Geeks For Geeks */
/* Title - Addition Under Modulo */
/* Created By - Akash Modak */
/* Date - 13/07/2020 */

// You are given two numbers a and b. You need to find the sum of a and b under modulo M.
// Note: Take M as 10e9+7

// Input:
// The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing a and b.

// Output:
// For each testcase, in a new line, print sum of a and b under modulo M.

// Your Task:
// This is a function problem. You need to complete the function sumUnderModulo that takes a and b as parameters and returns sum of a and b under modulo M.

// Note : Solve the problem in Constant time and space complexity.

// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++


int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    //your code here
    int ans = a%M;
    ans+=(b%M);
    ans = ans%M;
    return ans;
}

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<sumUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends