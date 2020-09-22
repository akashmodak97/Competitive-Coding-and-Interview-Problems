/* Leet Code */
/* Title - Minimum Window Substring */
/* Created By - Akash Modak */
/* Date - 22/09/2020 */

// Given a string S and a string T, find the minimum window in S which will contain all the characters in T in complexity O(n).

// Example:

// Input: S = "ADOBECODEBANC", T = "ABC"
// Output: "BANC"
// Note:

// If there is no such window in S that covers all characters in T, return the empty string "".
// If there is such window, you are guaranteed that there will always be only one unique minimum window in S.

class Solution {
public:
    string minWindow(string s, string t) {
        string ans = "";
        int n = t.length();
        unordered_map<char,int> m1,m2;
        for(int i=0;i<t.length();i++)
            m2[t[i]]++;
        int start = 0,i,count=0,minLen = INT_MAX;
        int start_idx = -1;
        for(i=0;i<s.length();i++){
            char t = s[i];
            m1[t]++;
            
            if(m2[t]!=0 and m2[t]>=m1[t])
                count++;
            if(count==n){
                
                char temp = s[start];
                while(m2[temp]==0 or m1[temp]>m2[temp]){
                    m1[temp]--;
                    start++;
                    temp = s[start];   
                }
                
                int length = i-start+1;
                if(minLen>length){
                    start_idx=start;
                    minLen = length;
                }
            }
        }
        if(start_idx==-1)
            return "";
        ans = s.substr(start_idx,minLen);
        return ans;
    }
};