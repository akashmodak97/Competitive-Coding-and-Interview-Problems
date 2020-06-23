/* Hacker Blocks */
/* Title - Ultra Fast Mathematics */
/* Created By - Akash Modak */
/* Date - 23/6/2020*/

// Prateek is an extremely gifted student. He is great at everything including Combinatorics, Algebra, Number Theory, Geometry, Calculus, etc. He is not only smart but extraordinarily fast!.

// One day Prateek was trying to find out if any one can possibly do calculations faster than him. As a result he made a very great contest and asked every one to come and take part.

// In his contest he gave the contestants many different pairs of numbers. Each number is made from digits 0 or 1. The contestants should write a new number corresponding to the given pair of numbers. The rule is simple: The i-th digit of the answer is 1 if and only if the i-th digit of the two given numbers differ. In the other case the i-th digit of the answer is 0.

// Prateek made many numbers and first tried his own speed. He saw that he can perform these operations on numbers of length ∞ (length of a number is number of digits in it) in a glance! He always gives correct answers so he expects the contestants to give correct answers, too. He is a good fellow so he won't give anyone very big numbers and he always gives one person numbers of same length.

// Now you are going to take part in Shapur's contest. See if you are faster and more accurate.

// Input Format
// The first line contains an integer t , the no. of testcases. There are two inputs in each line. Each of them contains a single number. It is guaranteed that the numbers are made from 0 and 1 only and that their length is same. The numbers may start with 0.

// Constraints
// The length of each number doesn't exceed 100.

// Output Format
// Write t lines — the corresponding answer to the corresponding input. Do not omit the leading 0s.

// Sample Input
// 1
// 10111 10000
// Sample Output
// 00111
// Explanation
// For the given example, Let str1 = "10111" and str2 = "10000", Value at first position of str1 is 1 and first position str2 is 1, hence according to the rule there will be 0 at the first position of the final ans.Similarly, for second position the value at second position of both of the strings is 0,so , there will be 0 at the second position of the final ans.Similarly, for third position the value at third position of str1 is 1 and str2 is 0,so , there will be 1 at the third position of the final ans and So, on.


#include<iostream>
#include<string>
#include<bitset>
using namespace std;
int main() {
	int t;
	cin>>t;
	// cin.get();
	while(t--){
		string str1,str2;
		cin>>str1;
		cin>>str2;
		int n = str1.length();
		int i = 0;
		for(;i<n;i++){
			if(str1[i]!=str2[i])
			cout<<"1";
			else
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}