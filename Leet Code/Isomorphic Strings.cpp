/* Leet Code */
/* Title - Isomorphic Strings */
/* Created By - Akash Modak */
/* Date - 28/12/2020 */

// Given two strings s and t, determine if they are isomorphic.

// Two strings are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

// Example 1:

// Input: s = "egg", t = "add"
// Output: true
// Example 2:

// Input: s = "foo", t = "bar"
// Output: false
// Example 3:

// Input: s = "paper", t = "title"
// Output: true
// Note:
// You may assume both s and t have the same length.

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()==0 and t.length()==0)
            return true;
        int s1 = s.length();
        
        unordered_map<char,char> m,m2;
        for(int i=0;i<s1;i++){
           if(m.find(s[i])==m.end() and m2.find(t[i])==m2.end()){
               m[s[i]] = t[i];      
               m2[t[i]] = s[i];      
           }
            else if(m.find(s[i])!=m.end()){
                // cout<<m[s[i]]<<" ";
                if(m[s[i]]!=t[i])
                    return false;
            }
            else if(m2.find(t[i])!=m2.end()){
                if(m2[t[i]]!=s[i])
                    return false;
            }
        }
        return true;
    }
};