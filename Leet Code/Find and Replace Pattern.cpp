/* Leet Code */
/* Title - Find and Replace Pattern */
/* Created By - Akash Modak */
/* Date - 18/05/2023 */

// Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.

// A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.

// Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.

 

// Example 1:

// Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
// Output: ["mee","aqq"]
// Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
// "ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.
// Example 2:

// Input: words = ["a","b","c"], pattern = "a"
// Output: ["a","b","c"]

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<int> pat1;
        vector<string> res;
        unordered_map<char,int> mp;
        int count=1;
        for(int i=0;i<pattern.size();i++) {
            if(mp.find(pattern[i])==mp.end())
                mp[pattern[i]]=count++;
        }
        for(int i=0;i<pattern.size();i++)
            pat1.push_back(mp[pattern[i]]);
        
        for(int i=0;i<words.size();i++){
            vector<int> temp;
            unordered_map<char,int> mp_temp;
            count=1;
            for(int j=0;j<words[i].length();j++)
                if(mp_temp.find(words[i][j])==mp_temp.end())
                    mp_temp[words[i][j]]=count++;
            for(int j=0;j<words[i].length();j++)
                temp.push_back(mp_temp[words[i][j]]);
            if(temp==pat1)
            res.push_back(words[i]);  
        }
        return res;
    }
};
