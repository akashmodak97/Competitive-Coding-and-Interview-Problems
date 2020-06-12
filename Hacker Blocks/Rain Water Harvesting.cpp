/* Hacker Blocks */ 
/* Title - Rain Water Harvesting */

// Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

// Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

// Explanation for the Sample input Testcase:
// Elevation Map

// So the total units of water she can save is 5 units

// Input Format
// First line contains an integer n. Second line contains n space separated integers representing the elevation map.

// Constraints
// 1 <= N <= 10^6

// Output Format
// Print a single integer containing the maximum unit of waters she can save.

// Sample Input
// 10
// 0 2 1 3 0 1 2 1 2 1
// Sample Output
// 5
// Explanation
// Refer to the image for explanation. Count the number of cells having water in them. 

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int l[n],r[n];
	int sum = 0;
	l[0]=a[0];
	for(int i=1;i<n;i++){
		if(l[i-1]<a[i])
			l[i]=a[i];
		else
			l[i]=l[i-1];
	}
	r[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--)
	{
		if(r[i+1]<a[i])
			r[i]=a[i];
		else
			r[i]=r[i+1];
	}
	for(int i=0;i<n;i++)
	{
		sum+=min(l[i],r[i]) - a[i];
	}
	cout<<sum<<endl;
	return 0;
}