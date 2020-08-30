/* Code Chef */
/* Title - Mode Of Frequencies */
/* Created By - Akash Modak */
/* Date - 30/08/2020 */

// Chef opted for Bio-Statistics as an Open-Elective course in his university, but soon got bored, and decided to text his friends during lectures. The instructor caught Chef, and decided to punish him, by giving him a special assignment.

// There are N numbers in a list A=A1,A2,…,AN. Chef needs to find the mode of the frequencies of the numbers. If there are multiple modal values, report the smallest one. In other words, find the frequency of all the numbers, and then find the frequency which has the highest frequency. If multiple such frequencies exist, report the smallest (non-zero) one.

// More formally, for every v such that there exists at least one i such that Ai=v, find the number of j such that Aj=v, and call that the frequency of v, denoted by freq(v). Then find the value w such that freq(v)=w for the most number of vs considered in the previous step. If there are multiple values w which satisfy this, output the smallest among them.

// As you are one of Chef's friends, help him complete the assignment.


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    unordered_map<int,int> m,m1;
	    for(int i=0;i<n;i++){
	        int t;
	        cin>>t;
	        m[t]++;
	    }
	    for(auto x: m){
	        m1[x.second]++;
	    }
	    pair<int,int> p;
	    p.first = INT_MAX;
	    p.second = INT_MIN;
	    
	    for(auto x:m1){
	       // cout<<x.first<<" "<<x.second<<endl;
	        if(x.first<p.first && x.second==p.second){
	            p.first = x.first;
	            p.second = x.second;
	            }
	        else if( x.second>p.second){
	            p.first = x.first;
	            p.second = x.second;
	        }
	    }
	    cout<<p.first<<endl;
	}
	return 0;
}
