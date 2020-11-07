/* Geeks for Geeks */
/* Title - Closing bracket index  */
/* Created By - Akash Modak */
/* Date - 8/11/2020 */

// Given a string with brackets ('[' and ']') and the index of an opening bracket. Find the index of the corresponding closing bracket.

// Example 1:

// Input:
// S = "[ABC[23]][89]"
// pos = 0
// Output: 8
// Explanation: [ABC[23]][89]
// The closing bracket corresponding to the
// opening bracket at index 0 is at index 8.

// â€‹Example 2:

// Input: 
// S = "ABC[58]"
// pos = 3
// Output: 6
// Explanation: ABC[58]
// The closing bracket corresponding to the
// opening bracket at index 3 is at index 6.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function closing() which takes a string S and a position pos as inputs and returns the index of the closing bracket corresponding to the opening bracket at index pos.


// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




class Solution
{
    public:
        int closing (string s, int pos)
        {
        	//code here.
        	int first = 0;
        	for(int i=pos+1;i<s.length();i++){
        	    if(s[i]=='[')
        	    first++;
        	    else if(s[i]==']' and first==0)
        	    return i;
        	    else if(s[i]==']' and first!=0)
        	    first--;
        	}
        	return 0;
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	}
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends