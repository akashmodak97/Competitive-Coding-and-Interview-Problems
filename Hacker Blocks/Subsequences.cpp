/* Hacker Blocks */
/* Title - Subsequences */
/* Created By - Akash Modak */
/* Date - 14/07/2020 */

// Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

// a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

// b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd”.given string (void is the return type for function).
// Note: Use cin for input for C++

// Input Format
// Enter a string

// Constraints
// None

// Output Format
// Print all the subsequences in a space separated manner and isplay the total no. of subsequences.

// Sample Input
// abcd
// Sample Output
//  d c cd b bd bc bcd a ad ac acd ab abd abc abcd 
// 16
// Explanation
// Print all possible subsequences of the given string.

#include<iostream>
#include<cstring>
using namespace std;
int max1=0;
void generate(string inp,string out){
	
	if(inp.length()==0){
		
		max1++;
		cout<<out<<" ";
		return ;
	}
	char ch = inp[0];
	string temp = inp.substr(1);
	generate(temp,out);
	generate(temp,out+ch);
}
int main() {
	string inp;
	cin>>inp;
	// string out;
	generate(inp,"");
	cout<<endl<<max1<<endl;
	return 0;
}