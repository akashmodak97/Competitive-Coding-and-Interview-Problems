/* Hacker Blocks */
/* Title - Remove Duplicates */
/* Created By - Akash Modak */
/* Date - 14/07/2020 */

// Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.

// Input Format
// String

// Constraints
// A string of length between 1 to 1000

// Output Format
// String

// Sample Input
// aabccba
// Sample Output
// abcba
// Explanation
// For the given example, "aabccba", Consecutive Occurrence of a is 2, b is 1, and c is 2.

// After removing all of the consecutive occurences, the Final ans will be : - "abcba".

#include<iostream>
#include<cstring>
using namespace std;
void gen(char* inp,int i){
	if(inp[i]=='\0' or inp[i+1]=='\0')
	return ;
	if(inp[i]==inp[i+1]){
		for(int j=i+1;j<strlen(inp);j++)
		inp[j]=inp[j+1];
		gen(inp,i);
	}
	else
	gen(inp,i+1);
}
int main() {
	char inp[100000];
	cin>>inp;
	gen(inp,0);
	cout<<inp<<endl;
	return 0;
}