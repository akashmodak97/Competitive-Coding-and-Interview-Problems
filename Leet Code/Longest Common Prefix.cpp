/* Leet Code */
/* Longest Common Prefix */

// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:

// Input: ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
// Note:

// All given inputs are in lowercase letters a-z.

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int n = strs.size();
        if(n==0)
            return s;
        if(n==1)
            return strs[0];
        
        sort(strs.begin(),strs.end());
        int minimumLength = min(strs[0].length(),strs[n-1].length());
        string first = strs[0], last = strs[n-1];
        int i=0;
        while(i<minimumLength && last[i]==first[i])
            i++;
        s = first.substr(0,i);
        return s;
    }
};