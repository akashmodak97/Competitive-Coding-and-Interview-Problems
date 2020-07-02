/* Hacker Blocks */
/* Title - Modular exponentiation */
/* Created By - Akash Modak */
/* Date - 7/2/2020 */

// Given three numbers a,b,c. Calculate (a^b)mod c.

// Input Format
// Single line containing three integers a,b,c separated by space.

// Constraints
// 1<=a,b,c<=100000

// Output Format
// Print (a^b)mod c.

// Sample Input
// 2 2 3
// Sample Output
// 1
// Explanation
// (2^2)mod 3=4 mod 3 = 1

#include<iostream>
#include<cmath>
using namespace std;
long long int power(long long int x, unsigned int y, int p)  
{  
    long long int res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
 
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	// long long int x = pow(a%c,b);
	
	cout<<power(a,b,c)<<endl;
	return 0;
}