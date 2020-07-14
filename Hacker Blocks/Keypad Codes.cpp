/* Hacker Blocks */
/* Title - Keypad Codes */
/* Created By - Akash Modak */
/* Date - 14/07/2020 */

// Take as input str, a string. str represents keys pressed on a nokia phone keypad. We are concerned with all possible words that can be written with the pressed keys.

// Assume the following alphabets on the keys: 1 -> abc , 2 -> def , 3 -> ghi , 4 -> jkl , 5 -> mno , 6 -> pqrs , 7 -> tuv , 8 -> wx , 9 -> yz

// E.g. “12” can produce following words “ad”, “ae”, “af”, “bd”, “be”, “bf”, “cd”, “ce”, “cf”

// a. Write a recursive function which returns the count of words for a given keypad string. Print the value returned.

// b.Write a recursive function which prints all possible words for a given keypad string (void is the return type for function).

// Input Format
// Single line input containing a single integer.

// Constraints
// 1 <= Length of string <= 10^3

// Output Format
// Print all the words in a space separated manner. Also print the count of these numbers in next line.

// Sample Input
// 12
// Sample Output
// ad ae af bd be bf cd ce cf
// 9
// Explanation
// 1 can correspond to 'a' , 'b' or 'c' .
// 2 can correspond to 'd', 'e' or 'f'.
// We print all combinations of these

#include<iostream>
using namespace std;
int count = 0;
char table[][10]={"","abc","def","ghi","kjl","mno","pqrs","tuv","wx","yz"};
void generate(char *inp, char *out,int i, int j){
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<" ";
		count++;
		return;
	}
	int key = inp[i]-'0';
	if(key==0)
	generate(inp,out,i+1,j);
	for(int k=0;table[key][k]!='\0';k++){
		out[j]=table[key][k];
		generate(inp,out,i+1,j+1);
	}
	return ;
}
int main() {
	char inp[100000],out[100000];
	cin>>inp;
	generate(inp,out,0,0);
	cout<<endl<<count<<endl;
	return 0;
}