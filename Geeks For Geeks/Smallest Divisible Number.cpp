/* Geeks For Geeks */
/* Title - Smallest Divisible Number */
/* Created By - Akash Modak */
/* Date - 13/07/2020 */

// Given a number n the task is to complete the function which returns an integer denoting the smallest number evenly divisible by each number from 1 to n.

// Input:
// The first line of input contains an integer T denoting the no of test cases then T test cases follow. Each line contains an integer N.

// Output:
// For each test case output will be in new line denoting the smallest number evenly divisible by each number from 1 to n.

#include <bits/stdc++.h>
using namespace std;

long long getSmallestDivNum(long long n);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<getSmallestDivNum(n)<<endl;
	}
	return 0;
	
}// } Driver Code Ends


/*You are required to complete this method */
long long getSmallestDivNum(long long n)
{
    //Your code here
    long long ans=1;
    for(long long i=1;i<=n;i++){
        ans = (ans*i)/(__gcd(ans,i));
    }
    return ans;
}
