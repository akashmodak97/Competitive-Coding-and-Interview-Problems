/* Hacker Blocks */
/* Title - Prateek Loves Candy */
/* Created By - Akash Modak */
/* Date - 2/7/2020 */

// Prateek recently graduated from college. To celebrate, he went to a candy shop and bought all the candies. The total cost was a number upto which there are n prime numbers (starting from 2). Since Prateek wants to minimize his cost, he calls you to help him find the minimum amount that needs to be paid. Being a student of Prateek bhaiya it is now your job to help him out :)

// Input Format
// First line contains a single integer denoting the number of test cases T. Next T lines contains a single integer N, denoting the number of primes required.

// Constraints
// T <= 10000

// It is guaranteed that the answer does not exceed 10^6.

// Output Format
// Print the minimum cost that needs to be paid.

// Sample Input
// 2
// 5
// 1
// Sample Output
// 11
// 2
// Explanation
// In the first case there are 5 primes upto 11(2,3,5,7,11).

#include<iostream>
#include<bitset>
#include<vector>
using namespace std;
#define ll long long int
const int n = 1000005;
bitset<1000006> b;
vector<int> primes;
void sieve(){
	b.set();
	b[0]=b[1]=0;
	for(ll i=2;i<=n;i++){
		if(b[i]){
			primes.push_back(i);
			for(ll j=i*i;j<=n;j+=i){
				b[j]=0;
			}
		}
	}
}
int main() {
	int t;
	cin>>t;
	sieve();
	while(t--){
	int n1;
	cin>>n1;
	cout<<primes[n1-1]<<endl;
	}
	return 0;
}