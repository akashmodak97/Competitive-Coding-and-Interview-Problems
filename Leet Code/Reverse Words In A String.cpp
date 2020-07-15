/* Leet Code */
/* Title - Reverse Words In A String  */
/* Created By - Akash Modak */
/* Date - 15/7/2020 */

// Given an input string, reverse the string word by word.

 

// Example 1:

// Input: "the sky is blue"
// Output: "blue is sky the"
// Example 2:

// Input: "  hello world!  "
// Output: "world! hello"
// Explanation: Your reversed string should not contain leading or trailing spaces.
// Example 3:

// Input: "a good   example"
// Output: "example good a"
// Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
 

// Note:

// A word is defined as a sequence of non-space characters.
// Input string may contain leading or trailing spaces. However, your reversed string should not contain leading or trailing spaces.
// You need to reduce multiple spaces between two words to a single space in the reversed string.

class Solution {
public:
    string reverseWords(string s) {
        stringstream a(s);
        string word,ans="";
        while(a>>word)
            ans = word+" "+ans;
        return ans.substr(0,ans.length()-1);
    }
};