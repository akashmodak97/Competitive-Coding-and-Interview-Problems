/* Hacker Blocks */
/* Title - Broken Calculator */
// Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled 100! ,He wondered what would this number look like. He tried to calculate 100! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers?

// Input Format
// a single lined integer N

// Constraints
// 1 < = N < = 500

// Output Format
// Print the factorial of N

// Sample Input
// 5
// Sample Output
// 120
// Explanation
// for factorial of 5 we have 5 x 4 x 3 x 2 x 1 = 120

#include<iostream>
using namespace std;
#define MAX 100000

int calc(int n, int res[], int resultSize){
	int i = 0;
	int carry = 0;
	while(i<resultSize){
		int temp = (res[i] * n + carry);
		res[i] = temp%10;
		carry = temp/10;
		
		i++;
	}
	while(carry){
		res[resultSize] = carry%10;
		carry/=10;
		resultSize++;
	}
	return resultSize;
}
int main() {
	int n;
	cin>>n;
	int res[MAX];
	int resultSize = 1;
	res[0] = 1;
	if(n==0 || n==1)
	cout<<1;
	for(int i = 2;i<=n;i++)
	resultSize = calc(i,res,resultSize);
	for(int i = resultSize-1;i>=0;i--)
	cout<<res[i];

	return 0;
}