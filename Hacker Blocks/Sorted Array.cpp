/* Hacker Blocks */
/* Title - Sorted Array */
/* Created By - Akash Modak */
/* Date - 14/07/2020 */

// Take as input N, the size of an integer array. Take one more input, which is a list of N integers separated by a space, and store that in an array. Write a recursive function which prints true if the array is sorted, and false otherwise.

// Input Format
// N x y z

// Constraints
// 1 < N < 1000
// -10^9 < i < 10^9, where i is an element of the array

// Output Format
// true OR false

// Sample Input
// 5
// 1 2 3 4 5
// Sample Output
// true

#include<iostream>
using namespace std;
bool isSorted(int ar[],int N)
{
  if(N==1)
  {
    return true;
  }
  if(ar[0]<=ar[1] && isSorted(ar+1,N-1))
  {
    return true;
  }
  return false;
}
int main()
{
	int N;
	cin>>N;
	int ar[N];
	for(int i=0;i<N;i++)
	{
	  cin>>ar[i];
	}
	bool y=isSorted(ar,N);
	if(y==1)
	cout<<"true";
	else
	cout<<"false";
	return 0;
}