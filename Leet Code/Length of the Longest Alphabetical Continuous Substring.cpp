/* Leet Code */
/* Title - Length of the Longest Alphabetical Continuous Substring */
/* Created By - Akash Modak */
/* Date - 23/05/2023 */

// An alphabetical continuous string is a string consisting of consecutive letters in the alphabet. In other words, it is any substring of the string "abcdefghijklmnopqrstuvwxyz".

// For example, "abc" is an alphabetical continuous string, while "acb" and "za" are not.
// Given a string s consisting of lowercase letters only, return the length of the longest alphabetical continuous substring.

 

// Example 1:

// Input: s = "abacaba"
// Output: 2
// Explanation: There are 4 distinct continuous substrings: "a", "b", "c" and "ab".
// "ab" is the longest continuous substring.
// Example 2:

// Input: s = "abcde"
// Output: 5
// Explanation: "abcde" is the longest continuous substring.

  
class Solution {
public:
    int longestContinuousSubstring(string s) {
        int i=0,count=1, total=1;
        for(i=1;i<s.length();i++){
            if(s[i]==s[i-1]+1)
                count++;
            else
              count=1;
            total=max(total,count);
        }
        return total;
    }
};
