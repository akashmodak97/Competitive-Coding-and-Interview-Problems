/*Leet Code */
/* Title - Implement strStr() */
/* Created By - Akash Modak */
/* Date - 16/11/2020 */

// Implement strStr().

// Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Clarification:

// What should we return when needle is an empty string? This is a great question to ask during an interview.

// For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

 

// Example 1:

// Input: haystack = "hello", needle = "ll"
// Output: 2
// Example 2:

// Input: haystack = "aaaaa", needle = "bba"
// Output: -1
// Example 3:

// Input: haystack = "", needle = ""
// Output: 0

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="")
            return 0;
        else if(haystack=="")
            return -1;
        
        int occur = -1;
        int j=0;
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[j]){
                occur = i;
                int x = i;
                while(j<needle.length() and x<haystack.length() and haystack[x]==needle[j]){
                    x++,j++;
                }
                if(j==needle.length())
                    return occur;
                else if(x==haystack.length())
                    return -1;
                else 
                    j=0;
            }
        }
        return -1;
    }
};