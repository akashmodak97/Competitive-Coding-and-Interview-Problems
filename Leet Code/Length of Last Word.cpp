/* Leetcode */
/* Title - Length of Last Word */
/* Created by - Akash Modak */
/* Date - 17/04/2021 */

// Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.

// A word is a maximal substring consisting of non-space characters only.

 

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Example 2:

// Input: s = " "
// Output: 0

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.length();
        int len = 0;
        if(length==1 and isalpha(s[0]))
            return 1;
        for(int i=length-1; i>=0;i--){
            if(isalpha(s[i])){
                for(int j=i; j>=0;j--){
                    if(!isalpha(s[j])){
                        return len;
                    }
                    len++;
                }
                return len;
            }
        }
        return 0;
    }
};