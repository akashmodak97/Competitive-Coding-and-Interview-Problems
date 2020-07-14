/* Hacker Blocks */
/* Title - Mapped Strings */
/* Created By - Akash Modak */
/* Date - 14/07/2020 */

// We are given a hashmap which maps all the letters with number. Given 1 is mapped with A, 2 is mapped with B…..26 is mapped with Z. Given a number, you have to print all the possible strings.

// Input Format
// A single line contains a number.

// Constraints
// Number is less than 10^6

// Output Format
// Print all the possible strings in sorted order in different lines.

// Sample Input
// 123
// Sample Output
// ABC
// AW
// LC
// Explanation
// '1' '2' '3' = ABC
// '1' '23' = AW
// '12' '3' = LC

#include<iostream>
using namespace std;
void generate(char *inp, char *out,int i,int j){
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return ;
	}
	//single digit
	int dig = inp[i]-'0';
	if(dig==0){
		generate(inp,out,i+1,j);
	}
	else{
	char ch = dig + 'A' - 1;
	out[j] = ch;
	// cout<<ch<<" hi"<<endl;
	generate(inp,out,i+1,j+1);
	}
	if(inp[i+1]!='\0'){
		int second = inp[i+1]-'0';
		int num = 10*dig+second;
		if(num<=26){
		char ch1 = num+'A'-1;
		out[j]=ch1;
		generate(inp,out,i+2,j+1);
		}
	}
	return ;
}
int main() {
	char a[1000000];
	cin>>a;
	char out[1000000];
	generate(a,out,0,0);
	return 0;
}