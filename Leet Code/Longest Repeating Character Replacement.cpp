/* Leet Code */
/* Title - Longest Repeating Character Replacement */
/* Created By - Akash Modak */
/* Date - 25/09/2020 */

// Given a string s that consists of only uppercase English letters, you can perform at most k operations on that string.

// In one operation, you can choose any character of the string and change it to any other uppercase English character.

// Find the length of the longest sub-string containing all repeating letters you can get after performing the above operations.

// Note:
// Both the string's length and k will not exceed 104.

// Example 1:

// Input:
// s = "ABAB", k = 2

// Output:
// 4

// Explanation:
// Replace the two 'A's with two 'B's or vice versa.
 

// Example 2:

// Input:
// s = "AABABBA", k = 1

// Output:
// 4

// Explanation:
// Replace the one 'A' in the middle with 'B' and form "AABBBBA".
// The substring "BBBB" has the longest repeating letters, which is 4.

class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen = 0,start=0,maxcount=0;
        int char_count[26] = {0};
        for(int i=0;i<s.length();i++){
            char_count[s[i]-'A']++;
            maxcount = max(maxcount,char_count[s[i]-'A']);
            
            while(i-start-maxcount+1>k){
                char_count[s[start]-'A']--;
                start++;
            }
            maxlen = max(maxlen,i-start+1);
        }
        return maxlen;
    }
};