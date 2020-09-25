/* Leet Code */
/* Title - Number of Good Ways to Split a String */
/* Created By - Akash Modak */
/* Date - 25/09/2020 */

// You are given a string s, a split is called good if you can split s into 2 non-empty strings p and q where its concatenation is equal to s and the number of distinct letters in p and q are the same.

// Return the number of good splits you can make in s.

 

// Example 1:

// Input: s = "aacaba"
// Output: 2
// Explanation: There are 5 ways to split "aacaba" and 2 of them are good. 
// ("a", "acaba") Left string and right string contains 1 and 3 different letters respectively.
// ("aa", "caba") Left string and right string contains 1 and 3 different letters respectively.
// ("aac", "aba") Left string and right string contains 2 and 2 different letters respectively (good split).
// ("aaca", "ba") Left string and right string contains 2 and 2 different letters respectively (good split).
// ("aacab", "a") Left string and right string contains 3 and 1 different letters respectively.
// Example 2:

// Input: s = "abcd"
// Output: 1
// Explanation: Split the string as follows ("ab", "cd").
// Example 3:

// Input: s = "aaaaa"
// Output: 4
// Explanation: All possible splits are good.
// Example 4:

// Input: s = "acbadbaada"
// Output: 2

class Solution {
public:
    int numSplits(string s) {
        unordered_map<char,int> right,left;
        int rightcount=0,leftcount=0;
        for(int i=0;i<s.length();i++){
            /* count number of unique characters on the right split*/
            if(!right.count(s[i]))
                rightcount++;
            right[s[i]]++;
            
        }
      
        int ans=0;
        for(int i=0;i<s.length();i++){
            /* count number of unique characters on the left split*/
            if(!left.count(s[i]))
                leftcount++;
            
            left[s[i]]++;
            if(right[s[i]]>0)
                right[s[i]]--;
            if(right[s[i]]==0)
                rightcount--;
           
            /* if both are same increase the counter of good splits*/
            if(rightcount==leftcount){
                ans++;
                 
            }
        }
        return ans;
    }
};