/* SPOJ */
/* Title - TEST - Life, the Universe, and Everything */
/* Created By - Akash Modak */
/* Date - 04/09/2020 */


// Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.


// Example
// Input:
// 1
// 2
// 88
// 42
// 99

// Output:
// 1
// 2
// 88

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n!=42){
		cout<<n<<"\n";
		cin>>n;
	}
	return 0;
}