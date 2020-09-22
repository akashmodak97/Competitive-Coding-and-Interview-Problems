/* Leet Code */
/* Title - Permutation in String */
/* Created By - Akash Modak */
/* Date - 23/09/2020 */

// Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first string's permutations is the substring of the second string.

 

// Example 1:

// Input: s1 = "ab" s2 = "eidbaooo"
// Output: True
// Explanation: s2 contains one permutation of s1 ("ba").
// Example 2:

// Input:s1= "ab" s2 = "eidboaoo"
// Output: False

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>  m1,m2;
    
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1>n2)
            return false;
        for(int i=0;i<n1;i++)
            m1[s1[i]]++;
        int count = 0,minLen=INT_MAX,start_idx=-1,start=0;
        for(int i=0;i<n2;i++){
            char temp = s2[i];
            m2[temp]++;
            
            if(m1[temp]!=0 and m2[temp]<=m1[temp])
                count++;
            if(count==n1)
            {
                char temp = s2[start];
                while(m1[temp]==0 or m2[temp]>m1[temp]){
                    m2[temp]--;
                    start++;
                    temp = s2[start];
                }
                int length = i-start+1;
                if(length<minLen){
                    minLen = length;
                    start_idx = start;
                }
            }
        }
        if(start_idx==-1)
            return false;
        else{
            if(minLen==n1)
                return true;
            else 
                return false;
        }
        // return false;
    }
};