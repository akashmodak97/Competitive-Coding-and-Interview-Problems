/* Hacker Blocks */
/* Title - Binary To Decimal */
//Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

#include<iostream>
#include<cmath>
using namespace std;
int convert(int num)
{
    int count = 0;
	int sum =0;
	int temp;
	while(num>0)
	{
		temp = (num%10)*pow(2,count++);
		sum += temp;
		num /= 10;
	}
    return sum;
}
int main() {
	int n,num;
	cin>>n;
	num = convert(n);
	cout<<num<<endl;
	
	return 0;
}
