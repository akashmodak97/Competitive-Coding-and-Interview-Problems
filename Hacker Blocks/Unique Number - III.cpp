/* Hacker Blocks */
/* Title - Unique Number - III */
/* Created By - Akash Modak */
/* Date 7/1/2020 */


We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
N < 10^5

Output Format
Output a single line containing the unique number

Sample Input
7
1 1 1 2 2 2 3
Sample Output
3
Explanation
3 is present only once


#include<iostream>
#include<numeric>
#include<unordered_set>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	unordered_set<int> s(a,a+n);
	int sum_array = accumulate(a,a+n,0);
	int sum_set = accumulate(s.begin(),s.end(),0);
	cout<<(3*sum_set-sum_array)/2;	//(k*sum_set-sum_array)/(k-1) where is number of similar elements
	return 0;
}