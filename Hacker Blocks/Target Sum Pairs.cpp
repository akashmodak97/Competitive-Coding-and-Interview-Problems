/* Hacker Blocks */
/* Title - Target Sum Pairs */

// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.

// Input Format
// The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.

// Constraints
// Length of the arrays should be between 1 and 1000.

// Output Format
// Print all the pairs of numbers which sum to target. Print each pair in increasing order.

// Sample Input
// 5
// 1
// 3
// 4
// 2
// 5
// 5
// Sample Output
// 1 and 4
// 2 and 3
// Explanation
// Find any pair of elements in the array which has sum equal to target element and print them.

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n,t;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>t;
	sort(a,a+n);
	int l=0,r=n-1;
	while(l<r){
		if(a[l]+a[r]<t)
			l++;
		else if(a[l]+a[r]>t)
			r--;
		else{
			cout<<a[l]<<" and "<<a[r]<<endl;
			l++;
			r--;
		}
	}

	return 0;
}