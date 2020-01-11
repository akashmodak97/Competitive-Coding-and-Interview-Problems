/* Coding Blocks Hacker Blocks*/
/* Title - FIBONACCI PATTERN (PATTERN 4) */
//Take N (number of rows), print the following pattern (for N = 4)
//0
//1 1
//2 3 5
//8 13 21 34
#include<iostream>
using namespace std;
int main() {
	int a=0,b=1,c,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=i;k++)
		{
			cout<<a<<" ";
			c=a+b;
			a=b;
			b=c;
		}
		cout<<endl;
	}
	return 0;
}
