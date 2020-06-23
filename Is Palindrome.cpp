/* Hacker Blocks */
/* Title - Is Palindrome */
/* Created By - Akash Modak */
/* Date - 23/6/2020 */

// Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

// Input Format
// Enter a number N , add N more numbers

// Constraints
// None

// Output Format
// Display the Boolean result

// Sample Input
// 4
// 1
// 2
// 2
// 1
// Sample Output
// true

#include<iostream>
using namespace std;
bool pal(int a[],int start,int end){
	if(start==end)
	return true;
	else{
		while(start<=end){
			if(a[start]==a[end])
			return pal(a,start+1,end-1);
			else
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	pal(a,0,n-1)?cout<<"true":cout<<"false";
	return 0;
}