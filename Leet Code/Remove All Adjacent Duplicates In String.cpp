/* Leet Code */
/* Title - Remove All Adjacent Duplicates In String */
/* Created By - Akash Modak */
/* Date - 12/05/2023 */

// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

// We repeatedly make duplicate removals on s until we no longer can.

// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

// Example 1:

// Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
// Example 2:

// Input: s = "azxxzy"
// Output: "ay"

class Solution {
public:
    string removeDuplicates(string s) {
        string res="";
        for(int i=0;i<s.length();i++){
            if(res.length()>0 && res[res.length()-1]==s[i])
                res.pop_back();
            else
                res.push_back(s[i]);
        }
        return res;
    }
};
