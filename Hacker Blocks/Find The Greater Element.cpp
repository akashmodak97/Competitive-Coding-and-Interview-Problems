/* Hacker Blocks */
/* Title - Find The Greater Element */
/* Created By - Akash Modak */
/* Date - 5/8/2020 */
/* Topic - Stack & Queue */

// We are given a circular array, print the next greater number for every element. If it is not found print -1 for that number. To find the next greater number for element Ai , start from index i + 1 and go uptil the last index after which we start looking for the greater number from the starting index of the array since array is circular.

// Input Format
// First line contains the length of the array n. Second line contains the n space separated integers.

// Constraints
// 1 <= n <= 10^6
// -10^8 <= Ai <= 10^8 , 0<= i< n

// Output Format
// Print n space separated integers each representing the next greater element.

// Sample Input
// 3
// 1 2 3
// Sample Output
// 2 3 -1
// Explanation
// Next greater element for 1 is 2,
// for 2 is 3 but not present for 3 therefore -1

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++){
		bool flag = false;
		int front =i;
		int rear = (i+1)%n;
		while(front!=rear){
			if(a[front]<a[rear]){
				cout<<a[rear]<<" ";
				flag = true;
				break;
			}
			rear = (rear+1)%n;
		}
		if(!flag)
		cout<<-1<<" ";
	}
	return 0;
}
