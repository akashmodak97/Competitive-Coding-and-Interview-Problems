/* Hacker Blocks */
/* Title - String Compression */
/* Created By - Akash Modak */
/* Date - 23/6/2020 */

// Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.

// Input Format
// A single String S

// Constraints
// 1 < = length of String < = 1000

// Output Format
// The compressed String.

// Sample Input
// aaabbccds
// Sample Output
// a3b2c2d1s1
// Explanation
// In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.

#include<iostream>
using namespace std;
void compressed()
{
	string str;
	cin>>str;
	int n = str.length();
	int i=0;
	int count = 0;
	char current;
	while(i<n){
		if(count==0){
			count++;
			current = str[i];
			cout<<str[i];
			
		}
		else if(current==str[i]){ 
			count++;
		}
		else{
			cout<<count;
			cout<<str[i];
			current=str[i];
			count=1;
		}
		i++;
	}
	if(n>=1) 
	cout<<count<<endl;
	cout<<endl;
}
int main() {
	compressed();
	return 0;
}