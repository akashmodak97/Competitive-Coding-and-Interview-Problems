/* Hacker Blocks */
/* Title - Mountain Pattern */
//Take N (number of rows), print the following pattern (for N = 4).

//                       1           1
//                       1 2       2 1  
//                       1 2 3   3 2 1
//                       1 2 3 4 3 2 1  



#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		cout<<j<<" ";
		for(k=((n-i)*2)-1;k>0;k--)
		cout<<"  ";
		if(i==n)
		j--;
		for(int l=j-1;l>=1;l--)
		cout<<l<<" ";
		cout<<endl;
	}
	return 0;
}