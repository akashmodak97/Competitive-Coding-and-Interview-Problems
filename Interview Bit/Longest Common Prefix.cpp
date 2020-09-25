/* Interview Bit */
/* Title - Longest Common Prefix */
/* Created By - Akash Modak */
/* Date - 26/09/2020 */

// Given the array of strings A,
// you need to find the longest string S which is the prefix of ALL the strings in the array.

// Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
// and S2.

// For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".



// Input Format

// The only argument given is an array of strings A.
// Output Format

// Return longest common prefix of all strings in A.
// For Example

// Input 1:
//     A = ["abcdefgh", "aefghijk", "abcefgh"]
// Output 1:
//     "a"
//     Explanation 1:
//         Longest common prefix of all the strings is "a".

// Input 2:
//     A = ["abab", "ab", "abcd"];
// Output 2:
//     "ab"
//     Explanation 2:
//         Longest common prefix of all the strings is "ab".

string Solution::longestCommonPrefix(vector<string> &A) {
    sort(A.begin(),A.end());
    int n = A.size();
    int minval = min(A[0].length(),A[n-1].length());
    int i=0;
    string first = A[0], last = A[n-1];
    while(i<minval and first[i]==last[i])
    i++;
    
    string ans = first.substr(0,i);
    return ans;
}
