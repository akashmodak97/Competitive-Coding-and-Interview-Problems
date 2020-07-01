
/* Hacker Blocks */
/* Title - XOR Profit Problem */
/* Created By - Akash Modak */
/* Date 7/1/2020 */


// We are given two coins of value x and y. We have to find the maximum of value of a XOR b where x <= a <= b <= y.

// Input Format
// We are given two integers x and y

// Constraints
// l <= r <= 1000

// Output Format
// Print the maximum value of a XOR b

// Sample Input
// 5
// 6
// Sample Output
// 3
// Explanation
// If a and b are taken to be 5. Then a xor b = 0
// If a and b are taken to be 6. Then a xor b = 0
// If a is 5 and b is 6. Then a xor b is 3.

#include<iostream>
using namespace std;
int main () {
	int a,b;
	cin>>a>>b;
	int x = 0;
	int i,j;
	for(i=a;i<b;i++){
		for(j=i+1;j<=b;j++)
		x = max(x,i^j);
	}
	cout<<x<<endl;
	return 0;
}