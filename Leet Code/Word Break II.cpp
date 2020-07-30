/* Leet Code */
/* Title - Word Break II */
/* Created By - Akash Modak */
/* Date - 30/7/2020 */

// Given a non-empty string s and a dictionary wordDict containing a list of non-empty words, add spaces in s to construct a sentence where each word is a valid dictionary word. Return all such possible sentences.

// Note:

// The same word in the dictionary may be reused multiple times in the segmentation.
// You may assume the dictionary does not contain duplicate words.
// Example 1:

// Input:
// s = "catsanddog"
// wordDict = ["cat", "cats", "and", "sand", "dog"]
// Output:
// [
//   "cats and dog",
//   "cat sand dog"
// ]
// Example 2:

// Input:
// s = "pineapplepenapple"
// wordDict = ["apple", "pen", "applepen", "pine", "pineapple"]
// Output:
// [
//   "pine apple pen apple",
//   "pineapple pen apple",
//   "pine applepen apple"
// ]
// Explanation: Note that you are allowed to reuse a dictionary word.
// Example 3:

// Input:
// s = "catsandog"
// wordDict = ["cats", "dog", "sand", "and", "cat"]
// Output:
// []

class Solution {
public:
    unordered_map<string, vector<string>> dp;

vector<string> util(string s, vector<string>& wordDict){
     
    if(s.empty())
        return {""};
    
    if(dp.find(s)!=dp.end())
        return dp[s];
    
    vector<string>sub,whole;
    for(string word : wordDict){
        string igot = s.substr(0,word.length());
        
        if(igot != word){
            continue ; 
        }else{
            sub = util(s.substr(word.length()) , wordDict);
        }
        
        for(string ans : sub){
            string space = ans.length()==0 ? "" : " ";
            whole.push_back(word+space+ans);
        }
    }
    
    return dp[s] = whole;
}

vector<string> wordBreak(string s, vector<string>& wordDict) {
         dp.clear();
        return  util(s,wordDict);
}
};