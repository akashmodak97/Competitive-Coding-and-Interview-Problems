/* Hacker Blocks */
/* Title - Strongest Fighter */
/* Created By - Akash Modak */
/* Date - 27/08/2020 */

// There is a group of MMA fighters standing together in a line. Given the value of their strengths, find the strength of the strongest fighter in continuous sub-groups of size k.

// Input Format
// First line contains an integer N, the number of fighters Followed by N integers where i'th integer denotes the strength of i'th fighter. Next line contains the size of sub-group k

// Constraints
// 1<=N<=10^7
// 1<=k<=N
// 1 <= Ai <= 100000

// Output Format
// Space separated integers in a single line denoting strength of strongest fighters in the groups.

// Sample Input
// 5
// 1 3 1 4 5
// 3
// Sample Output
// 3 4 5
// Explanation
// First sub-group: 1 3 1 --> Max strength is 3
// Second sub-group: 3 1 4 --> Max strength is 4
// Third sub-group: 1 4 5 --> Max strength is 5

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>k;
	int i;
	deque<int> q;
	for(i=0;i<k;i++)
	{
		while(!q.empty() and a[i]>a[q.back()])
		q.pop_back();
		q.push_back(i);
	}
	for(;i<n;i++){
		cout<<a[q.front()]<<" ";
		while(!q.empty() and q.front()<=i-k)
		q.pop_front();

		while(!q.empty() && a[i]>=a[q.back()])
		q.pop_back();
		q.push_back(i);
	}
	cout<<a[q.front()];
	return 0;
}