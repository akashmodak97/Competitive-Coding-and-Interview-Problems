/*Coding Blocks Hacker Blocks*/
/*Title - Manmohan Loves Patterns- II */

//Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.
//
//Input Format
//Single integer N denoting number of lines of the pattern.
//
//Constraints
//N<=1000
//
//Output Format
//Pattern.
//
//Sample Input
//5
//Sample Output
//1
//11
//202
//3003
//40004
//Explanation
//If row number is n (>1), total character is n. First and last character is n-1 and rest are 0.
#include<iostream>
using namespace std;
int main() {
	int n;
	int row,col;
	cin>>n;
	row = 1;
	while(row<=n)
	{
		col = 1;
		if(row==1)
		cout<<1;
		else
		{
			cout<<row-1;
			while(col<=row-2)
			{
				cout<<0;
				col++;
			}
			cout<<row-1;
		}
		cout<<endl;
		row++;
	}
	return 0;
}

