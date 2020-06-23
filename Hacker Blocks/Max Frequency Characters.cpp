/* Hacker Blocks */
/* Title - Max Frequency Characters */
/* Created By - Akash Modak */
/* Date - 23/6/2020 */

// Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

// Input Format
// String

// Constraints
// A string of length between 1 to 1000.

// Output Format
// Character

// Sample Input
// aaabacb
// Sample Output
// a
// Explanation
// For the given input string, a appear 4 times. Hence, it is the most frequent character.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int maxFrequency(){
	string str;
	cin>>str;
	vector<int> ar(26,0);
	for(int i=0;i<str.length();i++){
		ar[str[i]-'a']++;
	}
	auto it = max_element(ar.begin(),ar.end());
	// cout<<*it<<endl;
	return it-ar.begin()+97;
}
int main() {
	char element = maxFrequency();
	cout<<element<<endl;
	return 0;
}