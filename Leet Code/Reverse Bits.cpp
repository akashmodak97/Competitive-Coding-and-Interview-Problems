/* Leet Code */
/* Title - Reverse Bits */
/* Created By - Akash Modak */
/* Date - 12/07/2020 */

// Reverse bits of a given 32 bits unsigned integer.

 

// Example 1:

// Input: 00000010100101000001111010011100
// Output: 00111001011110000010100101000000
// Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, so return 964176192 which its binary representation is 00111001011110000010100101000000.
// Example 2:

// Input: 11111111111111111111111111111101
// Output: 10111111111111111111111111111111
// Explanation: The input binary string 11111111111111111111111111111101 represents the unsigned integer 4294967293, so return 3221225471 which its binary representation is 10111111111111111111111111111111.
//  

#define R2(n)     n,     n + 2*64,     n + 1*64,     n + 3*64 
#define R4(n) R2(n), R2(n + 2*16), R2(n + 1*16), R2(n + 3*16) 
#define R6(n) R4(n), R4(n + 2*4 ), R4(n + 1*4 ), R4(n + 3*4 ) 
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0;
        uint32_t lookuptable[256]={R6(0),R6(2),R6(1),R6(3)};
        
        rev = lookuptable[ n & 0xff ]<<24 |    
              lookuptable[ (n >> 8) & 0xff ]<<16 |  
              lookuptable[ (n >> 16 )& 0xff ]<< 8 | 
              lookuptable[ (n >>24 ) & 0xff ] ; 
        return rev;
    
    }
};