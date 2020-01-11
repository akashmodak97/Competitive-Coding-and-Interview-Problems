/* Code Chef*/
/* Title - Is this a give away*/
//All submissions for this problem are available.You are given two integers l and r.
//You have to choose k real numbers in the interval [l,r] uniform randomly.
//What is the expected count of distinct numbers chosen by you?
//
//Input
//The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
//The first and only line of each test case contains three space-separated integers l, r and k.
//Output
//For each test case, print a single line containing one integer - the expected count of distinct numbers chosen. It can be proved that the expected count is always an integer.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int l,r,k;
	    cin>>l>>r>>k;
	    if(l!=r)
	    cout<<k<<endl;
	    else
	    cout<<1<<endl;
	}
	return 0;
}
