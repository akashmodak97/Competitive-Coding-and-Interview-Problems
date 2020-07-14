/* Hacker Blocks */
/* Title - Duplicate Character Formatting */
/* Created By - Akash Modak */
/* Date - 14/07/2020 */

// Take as input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned

// Input Format
// Enter a String

// Constraints
// 1<= Length of string <= 10^4

// Output Format
// Display the resulting string (i.e after inserting (*) b/w all the duplicate characters)

// Sample Input
// hello
// Sample Output
// hel*lo
// Explanation
// We insert a "*" between the two consecutive 'l' .

#include<iostream>
#include<cstring>
using namespace std;
void gen(char* inp,int i){
	if(inp[i]=='\0' || inp[i+1]=='\0')
	{
		return ;
	}
	if(inp[i]==inp[i+1]){
		// int j=i+1;
		for(int k=strlen(inp);k>i+1;k--)
		inp[k]=inp[k-1];
		inp[i+1]='*';
		gen(inp,i+2);
	}
	else
	 gen(inp,i+1);
}
int main() {
	char inp[10000];
	cin>>inp;
	
	gen(inp,0);
	cout<<inp<<endl;
	return 0;
}