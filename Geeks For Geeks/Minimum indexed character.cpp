/* Geeks for Geeks */
/* Title - Minimum indexed character  */
/* Created By - Akash Modak */
/* Date - 15/08/2021 */

// Given a string S and another string patt. Find the character in patt that is present at the minimum index in S.
 

// Example 1:

// Input: S = "zsyle", patt = "bjz"
// Output: "z"
// Example 2:

// Input: S = "anskg", patt = "me"
// Output: "$"
 

// Your Task:
// You don't need to read or print anything. Your task is to complete the function printMinIndexChar() which takes S and patt as input parameter and returns the character in patt that is present at the minimum index in S. If not possible returns "$".
 

// Expected Time Complexity: O(max(|str|, |patt|))
// Expected Auxilary Space: O(K) where K <= 26

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
	string printMinIndexChar(string S, string patt)
	{
	    // Code here
	    unordered_set<char> st;
	    string res = "$";
	    for(int i=0;i<patt.length();i++){
	        st.insert(patt[i]);
	    }
	    
	    for(int i=0;i<S.length();i++){
	        if(st.find(S[i]) != st.end()){
	            res[0] = S[i];
	            return res;
	        }
	            
	    }
	    
	    return res;
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends