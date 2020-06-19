/* Hacker Blocks */
/* Title - Sum of Two Arrays */
// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.

// Input Format
// Constraints
// Length of Array should be between 1 and 1000.

// Output Format
// Sample Input
// 4
// 1 0 2 9
// 5
// 3 4 5 6 7
// Sample Output
// 3, 5, 5, 9, 6, END
// Explanation
// Sum of [1, 0, 2, 9] and [3, 4, 5, 6, 7] is [3, 5, 5, 9, 6] and the first digit represents carry over , if any (0 here ) .

#include<iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
	cin>>b[i];
	int k = max(n,m)+1;
	int c[k],carry=0;
	int i = n-1,p;
	int j = m-1;
	for(p=k-1;p>=0;p--){
		if(i>=0 && j>=0){
			c[p] = (a[i]+b[j]+carry)%10;
			carry = (a[i]+b[j]+carry)/10;
			i--;
			j--;
		}
		else
		break;
	}
	while(i>=0)
	{
		c[p--] = (a[i] + carry)%10;
		carry = (a[i]+carry)/10;
		i--;
	}
	while(j>=0)
	{
		c[p--] = (b[j] + carry)%10;
		carry = (b[j]+carry)/10;
		j--;
	}
	if(carry>0){
	c[0]=carry;
	p=0;
	}
	else p=1;
	for(;p<k;p++)
	cout<<c[p]<<", ";
	cout<<"END";
	return 0;
}