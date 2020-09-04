/* Geeks For Geeks */
/* Title - Remove duplicate elements from sorted Array */
/* Created By - Akash Modak */
/* Date - 04/09/2020 */

// Given a sorted array A of size N. The function remove_duplicate takes two arguments . The first argument is the sorted array A[ ] and the second argument is 'N' the size of the array and returns the size of the new converted array A[ ] with no duplicate element.

// Input Format:
// The first line of input contains T denoting the no of test cases . Then T test cases follow . The first line of each test case contains an Integer N and the next line contains N space separated values of the array A[ ] .

// Output Format:
// For each test case output will be the transformed array with no duplicates.

// Your Task:
// Your task to complete the function remove_duplicate which removes the duplicate  elements from the array .

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 104
// 1 <= A[ ] <= 106

// Example:
// Input  (To be used only for expected output) :
// 2
// 5
// 2 2 2 2 2 
// 3
// 1 2 2
// Output
// 2
// 1 2

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/*You are required to complete this function */

int remove_duplicate(int [],int );

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }

    int n = remove_duplicate(a,sizeof(a)/sizeof(a[0]));

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function */
int remove_duplicate(int A[],int N)
{
//Your code here
    int i=0,j=1;
    for(;j<N;j++){
        if(A[i]!=A[j]){
            i++;
            A[i]=A[j];
        }
    }
    return i+1;
}