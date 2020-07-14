/* Hacker Blocks */
/* Title - Convert String to Integer */
/* Created By - Akash Modak */
/* Date - 14/07/2020 */

// Take as input str, a number in form of a string. Write a recursive function to convert the number in string form to number in integer form. E.g. for “1234” return 1234. Print the value returned.

// Input Format
// Enter a number in form of a String

// Constraints
// 1 <= Length of String <= 10

// Output Format
// Print the number after converting it into integer

// Sample Input
// 1234
// Sample Output
// 1234
// Explanation
// Convert the string to int. Do not use any inbuilt functions.

#include<iostream>
#include<cstring>
using namespace std;
int convert(char *a,int n){
	if(n==0)
	return 0;
	int digit = a[n-1]-'0';
	int ans = convert(a,n-1);
	return ans*10+digit;
}
int main() {
	char temp[1000];
	cin>>temp;
	cout<<convert(temp,strlen(temp));
	return 0;
}