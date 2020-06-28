/* Hacker Blocks */
/* Title - Help Rahul To Search */
/* Created By - Akash Modak */
/* Date - 28/06/2020 */

// Rahul had a sorted array of numbers from which he had to find a given number quickly. His friend by mistake rotated the array. Now Rahul doesn't have time to sort the elements again. Help him to quickly find the given number from the rotated array.

// Hint - Think Binary Search!



// Input Format
// The first line contains N - the size of the array. the next N lines contain the numbers of the array.The next line contains the item to be searched.

// Constraints
// Output Format
// Output the index of number in the array to be searched. Output -1 if the number is not found.

// Sample Input
// 5
// 4
// 5
// 1
// 2
// 3
// 2
// Sample Output
// 3
// Explanation
// The given rotated array is [4, 5, 1, 2, 3]. The element to be searched is 2 whose index is 3.

#include<iostream>
using namespace std;
int find(int a[],int n,int k){
	int s= 0;
	int e = n-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==k)
		return mid;
		else if(a[s]<=a[mid]){
			if(k>=a[s] and k<=a[mid])
			e=mid-1;
			else
			s=mid+1;
		}
		else{
			if(k>=a[mid] and k<=a[e])
			s=mid+1;
			else
			e=mid-1;
		}
	}
	return -1;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int k;
	cin>>k;
	cout<<find(a,n,k);
	return 0;
}