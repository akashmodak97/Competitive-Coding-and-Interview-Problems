/* Leet Code */
/* Title - Optimal Partition of String */
/* Created By - Akash Modak */
/* Date - 18/05/2023 */

// Given a string s, partition the string into one or more substrings such that the characters in each substring are unique. That is, no letter appears in a single substring more than once.

// Return the minimum number of substrings in such a partition.

// Note that each character should belong to exactly one substring in a partition.

 

// Example 1:

// Input: s = "abacaba"
// Output: 4
// Explanation:
// Two possible partitions are ("a","ba","cab","a") and ("ab","a","ca","ba").
// It can be shown that 4 is the minimum number of substrings needed.
// Example 2:

// Input: s = "ssssss"
// Output: 6
// Explanation:
// The only valid partition is ("s","s","s","s","s","s").

class Solution {
public:
    int partitionString(string s) {
        int maxVal=1;
        int letters[26]={0};  
        for(int i=0;i<s.length();i++) {  
              if(letters[s[i]-'a']==1){
                  maxVal++;
                  memset(letters,0,sizeof(letters));
              }
              letters[s[i]-'a']++;
        }
        return maxVal;
    }
};
