/* Hacker Blocks */
/* Title - Pattern with zeroes */
//Take N (number of rows), print the following pattern (for N = 5)
//1
//2 2
//3 0 3
//4 0 0 4
//5 0 0 0 5

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
			cout<<row<<" ";
			while(col<=row-2)
			{
				cout<<0<<" ";
				col++;
			}
			cout<<row;
		}
		cout<<endl;
		row++;
	}
	return 0;
}
