/* Hacker Blocks */
/* Title - Replace PI */
/* Created By - Akash Modak */
/* Date - 06/07/2020 */

// Replace all occurrences of pi with 3.14

// Input Format
// Integer N, no of lines with one string per line

// Constraints
// 0 < N < 1000
// 0 <= len(str) < 1000

// Output Format
// Output result one per line

// Sample Input
// 3
// xpix
// xabpixx3.15x
// xpipippixx
// Sample Output
// x3.14x
// xab3.14xx3.15x
// x3.143.14p3.14xx
// Explanation
// All occurrences of pi have been replaced with "3.14".

#include<iostream>
using namespace std;
void replacepi(char *a,int i){
	if(a[i]=='\0' or a[i+1]=='\0')
	return;
	if(a[i]=='p' and a[i+1]=='i'){
		int j=i;
		while(a[j]!='\0')
		j++;
		while(j>=i+2){
			a[j+2]=a[j];
			j--;
		}
		a[i]='3';
		a[i+1]='.';
		a[i+2]='1';
		a[i+3]='4';
		replacepi(a,i+4);
	}
	else
	replacepi(a,i+1);
}
int main() {
	int t;
	cin>>t;
	while(t--){
	char a[1000];
	cin>>a;
	// int n = strlen(a);
	replacepi(a,0);
	cout<<a<<endl;
	}
	return 0;
}