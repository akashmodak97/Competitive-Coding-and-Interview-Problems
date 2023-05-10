/* Leet Code */
/* Title - Minimum Remove to Make Valid Parentheses */
/* Created By - Akash Modak */
/* Date - 10/05/2023 */

// Given a string s of '(' , ')' and lowercase English characters.

// Your task is to remove the minimum number of parentheses ( '(' or ')', in any positions ) so that the resulting parentheses string is valid and return any valid string.

// Formally, a parentheses string is valid if and only if:

// It is the empty string, contains only lowercase characters, or
// It can be written as AB (A concatenated with B), where A and B are valid strings, or
// It can be written as (A), where A is a valid string.
 

// Example 1:

// Input: s = "lee(t(c)o)de)"
// Output: "lee(t(c)o)de"
// Explanation: "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.
// Example 2:

// Input: s = "a)b(c)d"
// Output: "ab(c)d"
// Example 3:

// Input: s = "))(("
// Output: ""
// Explanation: An empty string is also valid.

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int brackets=0,n=s.length();
        string res;
        for(int i=0;i<n;i++){
            if(s[i]=='(') brackets++;
            else if(s[i]==')'){
                if(brackets==0)s[i]='$';
                else brackets--;
            }
        }
        brackets=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')')brackets++;
            else if(s[i]=='('){
                if(brackets==0) s[i]='$';
                else brackets--;
            }
        }
        for(int i=0;i<s.length();i++)
            if(s[i]!='$')res+=s[i];
        return res;
    }
};
