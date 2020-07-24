/* Geeks For Geeks */
/* Title - Exactly 3 Divisors */
/* Created By - Akash Modak */
/* Date - 25/7/2020 */

// Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.

// Input:
// The first line contains integer T, denoting number of test cases. Then T test cases follow. The only line of each test case contains an integer N.

// Output:
// For each testcase, in a new line, print the answer of each test case.

// Your Task:
// This is a function problem. You only need to complete the function exactly3Divisors() that takes N as parameter and returns count of numbers less than or equal to N with exactly 3 divisors.

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
int exactly3Divisors(int N)
{
    //Your code here
    int x=sqrt(N);
    vector<bool> v(x+1,true);
    v[0]=false;
    v[1]=false;
    for(int i=2;i<=x;i++){
        if(v[i]){
            for(int j=i*2;j<=x;j+=i)
            v[j]=false;
        }
    }
    int count = 0;
    for(int i=2;i<=x;i++)
    if(v[i])
    count++;
    return count;
}

// { Driver Code Starts.


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends