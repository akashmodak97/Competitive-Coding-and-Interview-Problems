/* Leet Code */
/* Title - Count Primes */
/* Created By - Akash Modak */
/* Date - 27/12/2020 */

// Count the number of prime numbers less than a non-negative number, n.

 

// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0

class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1 || n==2){
            return 0;
        }
        vector<int> prime(n+1,1);
        prime[0] = 0;
        prime[1] = 0;
        // prime[2] = 0;
        for(long long int i=2;i<=n;i++){
            if(prime[i]==1){
                for(long long int j=i*i;j<=n;j+=i)
                    prime[j] = 0;
            }
        }
        int count = 0;
        for(int i=2;i<n;i++){
            if(prime[i])
                count++;
        }
        return count;
    }
};