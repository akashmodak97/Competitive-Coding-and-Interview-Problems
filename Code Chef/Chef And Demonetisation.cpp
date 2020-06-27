/* Code Chef */
/* Title - Chef And Demonetisation */
/* Created By - Akash Modak */
/* Date - 27/06/2020 */

// In a country called Chef Land, there was a lot of monetary fraud, so Chefu, the head of the country, decided to choose new denominations of the local currency ― all even-valued coins up to an integer N should exist. After a few days, a citizen complained that there was no way to create an odd value, so Chefu decided that he should also introduce coins with value 1. Formally, you are given an integer N; for v=1 and each even positive integer v≤N, coins with value v exist.

// You are also given an integer S. To handle transactions quickly, find the minimum number of coins needed to pay a price S.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains two space-separated integers S and N.
// Output
// For each test case, print a single line containing one integer ― the minimum number of coins.

// Constraints
// 1≤T≤10,000
// 1≤S≤109
// 2≤N≤109
// N is even
// Subtasks
// Subtask #1 (100 points): original constraints

// Example Input
// 4
// 2 2
// 1 14
// 30 10
// 31 4
// Example Output
// 1
// 1
// 3
// 9
// Explanation
// Example case 1: One coin with value 2 is sufficient.

// Example case 2: We need to use one coin with value 1.

// Example case 3: We need 3 coins, each with value 10.

// Example case 4: We can use seven coins with value 4, one coin with value 2 and one coin with value 1.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int s,n,temp,t;
	cin>>t;
	while(t--){
	cin>>s>>n;
	long long int count=0;
	
	   if(s<n){
	       if(s%2==0 || s==1){
	           count=1;
	       }
	       else{
	           count=2;
	       }
	   }
	   else{

	    
	    temp = s/n;
	    count+=temp;
	    s=s%n;
	    if(s>0)
	    if(s%2==0 or s==1)
	    count+=1;
	    else
	    count+=2;
	    

	   }


	cout<<count<<endl;
	}
	return 0;
}













