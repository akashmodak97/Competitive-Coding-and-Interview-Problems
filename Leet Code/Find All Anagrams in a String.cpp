/* Leet Code */
/* Title - Find All Anagrams in a String */
/* Created By - Akash Modak */
/* Date - 23/09/2020 */

// Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

// Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.

// The order of output does not matter.

// Example 1:

// Input:
// s: "cbaebabacd" p: "abc"

// Output:
// [0, 6]

// Explanation:
// The substring with start index = 0 is "cba", which is an anagram of "abc".
// The substring with start index = 6 is "bac", which is an anagram of "abc".
// Example 2:

// Input:
// s: "abab" p: "ab"

// Output:
// [0, 1, 2]

// Explanation:
// The substring with start index = 0 is "ab", which is an anagram of "ab".
// The substring with start index = 1 is "ba", which is an anagram of "ab".
// The substring with start index = 2 is "ab", which is an anagram of "ab".

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> m1,m2;
        vector<int> res;
        int n1 = s.length();
        int n2 = p.length();
        if(n2>n1)
            return res;
        for(int i=0;i<n2;i++){
            m2[p[i]]++;
        }
        int start = 0,count=0;
        for(int i=0;i<n1;i++){
            char temp = s[i];
            m1[s[i]]++;
            
            if(m2[temp]!=0 and m2[temp]>=m1[temp])
                count++;
            if(count==n2){
                char t = s[start];
                while(m2[t]==0 or m2[t]<m1[t]){
                    m1[t]--;
                    start++;
                    t = s[start];
                }
                int len = i-start+1;
                if(len==n2)
                    res.push_back(start);
            }
        }
        return res;
    }
};