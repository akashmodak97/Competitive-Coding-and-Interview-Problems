/* Coding Blocks */
/* Title - Tricky Permutations */
/* Created By - Akash Modak */
/* Date - 23/7/2020 */

// Given a string containing duplicates, print all its distinct permutations such that there are no duplicate permutations and all permutations are printed in a lexicographic order.

// Input Format
// The first and only line of the test case contains the input string.

// Constraints
// Length of the string <= 8

// Output Format
// Print all the distinct permutations in a lexicographic order such that each permutation is in a new line. Note that there should not be any duplicate permutations.

// Sample Input
// ABA
// Sample Output
// AAB
// ABA
// BAA
// Explanation
// The possible permutations for the given string are { "AAB" , "AAB" , "ABA" , "BAA" } . We skip the repeating "AAB" permutation and only print it in once. Also we print the final output in lexicographical order.

#include<iostream>
#include<set>
#include<cstring>
using namespace std;
set<string> s;
void permute(char *inp,int i){
	if(inp[i]=='\0')
	{
		s.insert(inp);
		return;
	}
	for(int j=i;inp[j]!='\0';j++){
		swap(inp[i],inp[j]);
		permute(inp,i+1);
		swap(inp[i],inp[j]);
	}
	return;
}
int main() {
	char inp[10000];
	cin>>inp;
	permute(inp,0);
	for(auto x: s){
		cout<<x<<endl;
	}
	return 0;
}