/* Leet Code */
/* Title - Add Binary */
/* Created By - Akash Modak */
/* Date - 19/7/2020 */

// Given two binary strings, return their sum (also a binary string).

// The input strings are both non-empty and contains only characters 1 or 0.

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"
 

// Constraints:

// Each string consists only of '0' or '1' characters.
// 1 <= a.length, b.length <= 10^4
// Each string is either "0" or doesn't contain any leading zero.

class Solution {
public:
    string addBinary(string a, string b) {
        int n1 = a.length();
        int n2 = b.length();
        string res = "";
        int i=n1-1,j=n2-1;
        int c = 0;
        while(i>=0 && j>=0){
            int x = a[i] - '0';
            int y = b[j] - '0';
            int sum = x^(y^c);
            c = x&y | (c&(x^y));
            string t = to_string(sum);
            res = t + res;
            i--;
            j--;
        }
        while(i>=0){
            int x = a[i]-'0';
            int sum = x^c;
            c = x&c;
            res = to_string(sum)+res;
            i--;
        }
        while(j>=0){
            int x = b[j]-'0';
            int sum = x^c;
            c = x&c;
            res = to_string(sum)+res;
            j--;
        }
        if(c!=0){
            res = to_string(c)+res;
        }
        return res;
    }
};