/* Hacker Blocks */
/* Title - Smart Keypad - I */
/* Created By - Akash Modak */
/* Date - 14/07/2020 */

// You will be given a numeric string S. Print all the possible codes for S.

// Following vector contains the codes corresponding to the digits mapped.

// string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

// For example, string corresponding to 0 is " " and 1 is ".+@$"

// Input Format
// A single string containing numbers only.

// Constraints
// length of string <= 10

// Output Format
// All possible codes one per line in the following order.

// The letter that appears first in the code should come first

// Sample Input
// 12
// Sample Output
// .a
// .b
// .c
// +a
// +b
// +c
// @a
// @b
// @c
// $a
// $b
// $c
// Explanation
// For code 1 the corresponding string is .+@$ and abc corresponds to code 2.

#include<iostream>
using namespace std;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void generate(char *inp,int i,int j,char *out){
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

	int key = inp[i] - '0';
	// if(key==0)
	// generate(inp,i+1,j,out);
	for(int k=0;table[key][k]!='\0';k++){
		out[j]=table[key][k];
		generate(inp,i+1,j+1,out);
	}
	return;
}
int main() {
	
	char inp[100],out[1000];
	cin>>inp;
	generate(inp,0,0,out);
	return 0;
}