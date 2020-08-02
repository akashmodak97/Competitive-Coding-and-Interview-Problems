/* Hacker Blocks */
/* Title - Merge Sorted Linked List */
/* Created By - Akash Modak */
/* Date - 2/8/2020 */

// Given 2 sorted linked lists , merge the two given sorted linked list and print the final Linked List.

// Input Format
// First Line contains T the number of test cases.
// For each test case :
// Line 1 : N1 the size of list 1
// Line 2 : N1 elements for list 1
// Line 3 : N2 the size of list 2
// Line 4 : N2 elements for list 2

// Constraints
// 1 <= T <= 1000
// 0<= N1, N2 <= 10^6
// -10^7 <= Ai <= 10^7

// Output Format
// For each testcase , print the node data of merged linked list.

// Sample Input
// 1
// 4
// 1 3 5 7
// 3
// 2 4 6
// Sample Output
// 1 2 3 4 5 6 7 
// Explanation
// The two lists after merging give the sorted output as [1,2,3,4,5,6,7] .

#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
		int n1,n2;
		list<int> l1,l2;
		cin>>n1;
		for(int i=0;i<n1;i++)
		{
			int temp;
			cin>>temp;
			l1.push_back(temp);
		}
		cin>>n2;
		for(int i=0;i<n2;i++)
		{
			int temp;
			cin>>temp;
			l2.push_back(temp);
		}
		l1.merge(l2);
		for(auto x = l1.begin();x!=l1.end();x++){
			cout<<(*x)<<" ";
		}
		cout<<endl;
	}
	return 0;
}