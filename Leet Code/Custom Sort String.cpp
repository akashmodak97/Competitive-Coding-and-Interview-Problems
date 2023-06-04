/* Leet Code */
/* Title - Custom Sort String */
/* Created By - Akash Modak */
/* Date - 04/06/2023 */

// You are given two strings order and s. All the characters of order are unique and were sorted in some custom order previously.

// Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.

// Return any permutation of s that satisfies this property.

 

// Example 1:

// Input: order = "cba", s = "abcd"
// Output: "cbad"
// Explanation: 
// "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
// Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.
// Example 2:

// Input: order = "cbafg", s = "abcd"
// Output: "cbad"

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        string res;
        for(int i=0;i<s.length();i++) mp[s[i]]++;
        
        for(int i=0;i<order.length();i++){
            while(mp.find(order[i])!=mp.end() and mp[order[i]]!=0){
                res+=order[i];
                mp[order[i]]--;
            }
        }
        for(int i=0;i<s.length();i++) {
            if(mp.find(s[i])!=mp.end() and mp[s[i]]!=0) res+=s[i], mp[s[i]]--;
        }
        return res;
    }
};
