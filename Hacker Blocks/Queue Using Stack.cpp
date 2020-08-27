/* Hacker Blocks */
/* Title - Dequeue efficient queue using stack */
/* Created By - Akash Modak */
/* Date - 27/08/2020 */

// Implement a Queue using two stacks Make it Dequeue efficient.

// Input Format
// Enter the size of the queue N add 0 - N-1 numbers in the queue

// Constraints
// Output Format
// Display the numbers in the order they are dequeued and in a space separated manner

// Sample Input
// 5
// Sample Output
// 0 1 2 3 4


#include<bits/stdc++.h>
using namespace std;

int main() {
	stack<int> a,b,c;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	a.push(i);
	while(!a.empty()){
		b.push(a.top());
		a.pop();
	}
	while(!b.empty()){
		cout<<b.top()<<" ";
		b.pop();
	}
	return 0;
}