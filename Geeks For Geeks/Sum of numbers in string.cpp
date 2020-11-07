/* Geeks for Geeks */
/* Title - Sum of numbers in string   */
/* Created By - Akash Modak */
/* Date - 7/11/2020 */


// Given a string str containing alphanumeric characters. The task is to calculate the sum of all the numbers present in the string.

// Example 1:

// Input:
// str = 1abc23
// Output: 24
// Explanation: 1 and 23 are numbers in the
// string which is added to get the sum as
// 24.
// Example 2:

// Input:
// str = geeks4geeks
// Output: 4
// Explanation: 4 is the only number, so the
// sum is 4.
// Your Task:
// The task is to complete the function findSum() which finds and returns the sum of numbers in the string.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends


// Function to calculate sum of all numbers present
// in a string containing alphanumeric characters
int findSum(string str)
{
	
	// Your code here
	int n = str.length();
	
	int sum = 0;
	int i = 0;
	string temp="";
	for(;i<n;i++){
	    if(str[i]>='0' and str[i]<='9'){
	        temp += str[i];
	        if(i+1<n and (str[i+1]<'0' or str[i+1]>'9') ){
	            int s = stoi(temp);
	            sum+=s;
	            temp = "";
	        }
	        else if(i+1==n){
	            int s = stoi(temp);
	            sum+=s;
	        }
	        
	    }
	}
	return sum;
	
}

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    cout << findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends