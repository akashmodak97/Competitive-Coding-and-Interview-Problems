/* Geeks for Geeks */
/* Title - Case-specific Sorting of Strings */
/* Created By - Akash Modak */
/* Date - 8/11/2020 */

// Given a string S consisting of uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.

// Example 1:

// Input:
// N = 12
// S = defRTSersUXI
// Output: deeIRSfrsTUX
// Explanation: Sorted form of given string
// with the same case of character as that
// in original string is deeIRSfrsTUX
// Example 2:

// Input:
// N = 6
// S = srbDKi
// Output: birDKs
// Explanation: Sorted form of given string
// with the same case of character will
// result in output as birDKs.
// Your Task:
// You only need to complete the function caseSort that returns sorted string.

// Expected Time Complexity: O(N*Log(N)).
// Expected Auxiliary Space: O(N).


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


string caseSort(string str, int n){
    
    // your code here
    string up="",lo="";
    for(int i=0;i<n;i++){
        if(str[i]>='A' and str[i]<='Z')
        up+=str[i];
        else
        lo+=str[i];
    }
    sort(up.begin(),up.end());
    sort(lo.begin(),lo.end());
    
    int j=0,k=0;
    string out = "";
    for(int i=0;i<n;i++){
        if(str[i]>='A' and str[i]<='Z')
        out+=up[j++];
        else
        out+=lo[k++];
    }
    return out;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		
		cout<<caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends