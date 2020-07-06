/* Hacker Blocks */
/* Title - Find Last Element */
/* Created By - Akash Modak */
/* Date - 06/07/2020 */

// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the last index at which M is found in the array and -1 if M is not found anywhere. Print the value returned.

// Input Format
// There will be three lines of input:

// N - the size of the array
// N space separated integers that make up the array
// M
// Constraints
// 1 < N < 1000
// -10^9 < i,M < 10^9 , where i is any number within the array

// Output Format
// For each case, print the integer value of the last index that M is found at within the given array.
// If it is not found, print '-1' (without the quotes).

// Sample Input
// 7
// 86 -16 77 65 45 77 28
// 77
// Sample Output
// 5
// Explanation
// Last occurence of 77 is found at index = 5.

#include<iostream>
using namespace std;
int fun(int *a,int n,int k){
	if(n==0)
	return -1;
	int i=fun(a+1,n-1,k);
	if(i==-1){
		if(a[0]==k)
		return 0;
		else
		return -1;
	}
	return i+1;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int m;
	cin>>m;
	cout<<fun(a,n,m)<<endl;
	return 0;
}
