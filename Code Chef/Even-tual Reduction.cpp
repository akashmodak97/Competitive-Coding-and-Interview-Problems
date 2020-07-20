/* Code Chef */
/* Title - Even-tual Reduction */
/* Created By - Akash Modak */
/* Date - 20/7/2020 */

// You are given a string S with length N. You may perform the following operation any number of times: choose a non-empty substring of S (possibly the whole string S) such that each character occurs an even number of times in this substring and erase this substring from S. (The parts of S before and after the erased substring are concatenated and the next operation is performed on this shorter string.)

// For example, from the string "acabbad", we can erase the highlighted substring "abba", since each character occurs an even number of times in this substring. After this operation, the remaining string is "acd".

// Is it possible to erase the whole string using one or more operations?

// Note: A string B is a substring of a string A if B can be obtained from A by deleting several (possibly none or all) characters from the beginning and several (possibly none or all) characters from the end.

#include<bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
	// your code goes here
// 	fast;
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    unordered_map<char,int> m;
	        for(int i=0;i<n;i++){
	            char a;
	            cin>>a;
	            m[a]++;
	        }
	    if(n%2){
	        cout<<"NO"<<endl;
	    }
	    else{
	        
	        bool flag = false;
	        for(auto x: m){
	            if(x.second%2){
	                cout<<"NO"<<endl;
	                flag = true;
	                break;
	            }
	        }
	        if(!flag)
	        cout<<"YES"<<endl;
	    }
	}
	
	return 0;
}
