/*Coding Blocks Hacker Blocks*/
/*Title - Manmohan Loves Patterns - I */ 

//Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.
//
//1
//11
//111
//1001
//11111
//100001
//
//Input Format
//Single number N.
#include<iostream>
using namespace std;
int main() {
	int n;
	int col,row;
	cin>>n;
	row=1;
	while(row<=n)
	{
		col=1;
		if(row%2==0)
		{
			cout<<1;
			while(col<=row-2){
			cout<<0;
			col++;
			}
			cout<<1;
			
		}
		else
		{
			while(col<=row)
			{
				cout<<1;
				col++;
			}
		}
		cout<<endl;
		row++;
	}
	return 0;
}

