/*Coding Blocks Hacker Blocks*/
/* Title - Von Neuman Loves Binary */

//Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.
//
//Input Format
//The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,num;
	cin>>n;
	int i;
	for(i=1;i<=n;i++)
	{
		cin>>num;
		int count = 0;
		int sum =0;
		int temp;
		while(num>0)
		{
			temp = (num%10)*pow(2,count++);
			sum += temp;
			num /= 10;
		}
		cout<<sum<<endl;
	}
	return 0;
}
