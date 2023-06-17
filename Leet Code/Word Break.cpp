/* Leetcode */
/* Title - Word Break */
/* Created By - Akash Modak */
/* Date - 17/06/2023 */

// Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.

// Note that the same word in the dictionary may be reused multiple times in the segmentation.

 

// Example 1:

// Input: s = "leetcode", wordDict = ["leet","code"]
// Output: true
// Explanation: Return true because "leetcode" can be segmented as "leet code".
// Example 2:

// Input: s = "applepenapple", wordDict = ["apple","pen"]
// Output: true
// Explanation: Return true because "applepenapple" can be segmented as "apple pen apple".
// Note that you are allowed to reuse a dictionary word.
// Example 3:

// Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
// Output: false

class Solution {
public:
    bool recur(string s, unordered_set<string> st, unordered_map<string,bool>& dp){
        if(s.length()==0) return true;
        if(st.find(s)!=st.end()) return dp[s]=true;
        if(dp.find(s)!=dp.end()) return dp[s];
        for(int i=1;i<s.length();i++){
            if(st.find(s.substr(0,i))!=st.end())
            {
                string temp = s.substr(i,s.length());
                bool success = recur(temp,st,dp);
                if(success)
                    return dp[temp]=true;
            }
            
        }
        return dp[s]=false;
        
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st;
        unordered_map<string,bool> dp;
        for(int i=0;i<wordDict.size();i++) st.insert(wordDict[i]);
        return recur(s,st,dp);
    }
};
