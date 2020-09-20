/* Leet Code */
/* Title - First Unique Character in a String */
/* Created By - Akash Modak */
/* Date - 21/09/2020 */

// Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.

// Examples:

// s = "leetcode"
// return 0.

// s = "loveleetcode"
// return 2.
 

// Note: You may assume the string contains only lowercase English letters.

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(256,0);
        
        for(int i=0;i<s.length();i++){
            v[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(v[s[i]]==1)
                return i;
        }
        return -1;
    }
};