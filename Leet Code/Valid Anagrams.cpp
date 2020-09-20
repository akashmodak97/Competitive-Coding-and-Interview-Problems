/* Leet Code */
/* Title - Valid Anagram */
/* Created By - Akash Modak */
/* Date - 21/09/2020 */

// Given two strings s and t , write a function to determine if t is an anagram of s.

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false
// Note:
// You may assume the string contains only lowercase alphabets.

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1,m2;
        if(s.length()!= t.length())
            return false;
        for(int i=0;i<s.length();i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        if(m1==m2)
            return true;
        else 
            return false;
        
    }
};