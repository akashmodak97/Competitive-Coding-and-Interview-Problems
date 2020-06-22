/* Hacker Blocks */
/* Title - Median of Sorted Arrays */

// We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.

// Input Format
// First line contains the input n. Second and Third line contains n space separated integers.

// Constraints
// N < 1000

// Output Format
// Print the median in a single line.

// Sample Input
// 5
// 1 3 5 7 9
// 2 4 6 8 10
// Sample Output
// 5
// Explanation
// Merged Array: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] So the median element is 5

#include<iostream>
using namespace std;
int median(int a[],int n){
	if(n%2==0)
		return (a[n/2]+a[n/2-1])/2;
	else 
		return a[n/2];
}
int getMedian(int a1[],int a2[],int n){
	if(n<0)
		return -1;
	if(n==1)
		return (a1[0]+a2[0])/2;
	if(n==2)
		return (max(a1[0],a2[0])+min(a1[1],a2[1]))/2;

	int m1 = median(a1,n);
	int m2 = median(a2,n);
	if(m1==m2)
	return m1;
	if(m1<m2){
		if(n%2==0){
			return getMedian(a1+n/2-1,a2,n-n/2+1);
		}
		return getMedian(a1+n/2,a2,n-n/2);
	}
	
		if(n%2==0)
			return getMedian(a1,a2+n/2-1,n-n/2+1);
		return getMedian(a1,a2+n/2,n-n/2);
	
}
int main() {
	int n;
	cin>>n;
	int a1[n],a2[n];
	for(int i=0;i<n;i++)
		cin>>a1[i];
	for(int i=0;i<n;i++)
		cin>>a2[i];
	int med = getMedian(a1,a2,n);
	cout<<med;
	return 0;
}