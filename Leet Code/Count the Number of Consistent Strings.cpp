/* Leet Code */
/* Title - Count the Number of Consistent Strings */
/* Created By - Akash Modak */
/* Date - 06/05/2023 */

// You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

// Return the number of consistent strings in the array words.

 

// Example 1:

// Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
// Output: 2
// Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.
// Example 2:

// Input: allowed = "abc", words = ["a","b","c","ab","ac","bc","abc"]
// Output: 7
// Explanation: All strings are consistent.
// Example 3:

// Input: allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]
// Output: 4
// Explanation: Strings "cc", "acd", "ac", and "d" are consistent.

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool arr[26] = {};
        bool flag = false;
        int count=0;
        for(int i=0;i<allowed.length();i++) arr[allowed[i]-'a']=true;
        for(int i=0;i<words.size();i++) {
            flag=true;
            for(char j:words[i]) if(!arr[j-'a']) {flag=false;break;}
            if(flag) count++;
        }
        return count;
    }
};
