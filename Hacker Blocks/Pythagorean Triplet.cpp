/*Hacker Blocks*/
/*Title - Pythagorean Triplet*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int N;
	cin>>N;
	if( N == 1 || N == 2 )
		cout<<-1;
	else if( N % 2 == 0 )
	{
		int temp = pow(N/2,2);
		cout<<temp-1<<" "<<temp+1;
	}
	else
	{
		int temp1 = (N+1)/2;
		int temp2 = (N-1)/2;
		cout<<2*temp1*temp2<<" "<<pow(temp1,2)+pow(temp2,2);

	}
	return 0;
}
