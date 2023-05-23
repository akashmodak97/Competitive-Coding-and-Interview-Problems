/* Leet Code */
/* Title - Maximum Number of Vowels in a Substring of Given Length */
/* Created By - Akash Modak */
/* Date - 23/04/2023 */

// Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

// Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

 

// Example 1:

// Input: s = "abciiidef", k = 3
// Output: 3
// Explanation: The substring "iii" contains 3 vowel letters.
// Example 2:

// Input: s = "aeiou", k = 2
// Output: 2
// Explanation: Any substring of length 2 contains 2 vowels.
// Example 3:

// Input: s = "leetcode", k = 3
// Output: 2
// Explanation: "lee", "eet" and "ode" contain 2 vowels.

class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> ch;
        ch.insert('a');
        ch.insert('e');
        ch.insert('i');
        ch.insert('o');
        ch.insert('u');
        int count=0, maxCount=0;
        for(int i=0;i<k;i++)
            if(ch.find(s[i])!=ch.end())
                count++;
        maxCount=count;
        for(int i=k;i<s.length();i++){
            if(ch.find(s[i-k])!=ch.end()) count--;
            if(ch.find(s[i])!=ch.end()) count++;
            maxCount=max(count,maxCount);
        }
        return maxCount;
    }
};
