/* Hacker Blocks */
/* Title - String Sort */
/* Created By - Akash Modak */
/* Date - 28/06/2020 */

// Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

// Input Format
// N(integer) followed by N strings.

// Constraints
// N<=1000

// Output Format
// N lines each containing one string.

// Sample Input
// 3
// bat
// apple
// batman
// Sample Output
// apple
// batman
// bat
// Explanation
// In mathematics, the lexicographic or lexicographical order (also known as lexical order, dictionary order, alphabetical order or lexicographic(al) product) is a generalization of the way words are alphabetically ordered based on the alphabetical order of their component letters.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool compare(string a,string b){
	int n = a.length();
	int m = b.length();
	int len = min(n,m);
	int i = 0;
			// cout<<a<<a.length()<<" "<<b<<b.length()<<endl;

	while(a[i]==b[i] && i<len){
		
		i++;
	}
	if(i==len){
		// cout<<a<<a.length()<<" "<<b<<b.length()<<endl;
		return a.length()>b.length();
	}
	else
	return a.compare(b)<0?true:false;
}
int main() {
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n,compare);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}